terraform {
  required_providers {
    aws = {
        source = "hashicorp/aws"
        version = "~> 5.11"
    }
  }
  required_version = ">= 1.3.0"
}

provider "aws" {
  region = "ap-northeast-1"
  access_key = "AKIAZI2LFZ6KAYONSQG5"
  secret_key = "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"
}