pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'cmake -H. -Bbuild'
                sh 'cmake --build build'
            }
        }
        stage('Test') {
            steps {
                sh 'cd build && ctest'
            }
        }
        stage('Documentation') {
            steps {
                sh 'cmake --build build --target docs'
            }
        }
    }
}

