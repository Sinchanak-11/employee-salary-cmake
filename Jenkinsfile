pipeline {
    agent { 
        label 'linux-agent'
    }

    stages {

        stage('Checkout') {
            steps {
                git branch: 'main',
                    url: 'YOUR_GITHUB_REPO_URL'
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
                bat '''
                cd build\\Debug
                EmployeeSalary.exe
                '''
            }
        }
    }
}
