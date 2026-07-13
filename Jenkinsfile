pipeline {
    agent { 
        label 'linux-agent'
    }

    stages {

        stage('Checkout') {
            steps {
                git branch: 'main',
                    url: 'https://github.com/Sinchanak-11/employee-salary-cmake.git'
            }
        }

        stage('Build CMake Project') {
            steps {
                bat '''
                mkdir build
                cd build
                cmake ..
                cmake --build .
                '''
            }
        }

        stage('Run Application') {
            steps {
                sh '''
                cd build\\Debug
                EmployeeSalary.exe
                '''
            }
        }
    }
}
