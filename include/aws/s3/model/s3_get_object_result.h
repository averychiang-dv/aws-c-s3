#ifndef AWS_S3_GET_OBJECT_RESULT_H
#define AWS_S3_GET_OBJECT_RESULT_H

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/common/common.h>

struct aws_s3_request_result;
struct aws_allocator;
struct aws_string;

struct aws_s3_request_result_get_object_output {
    struct aws_string *content_type;
    size_t content_length;
};

struct aws_s3_request_result *aws_s3_request_result_get_object_new(struct aws_allocator *allocator);

#endif
