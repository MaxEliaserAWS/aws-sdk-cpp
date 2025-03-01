﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provide the location for output data from a custom classifier job. This field
   * is mandatory if you are training a native classifier model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassifierOutputDataConfig">AWS
   * API Reference</a></p>
   */
  class DocumentClassifierOutputDataConfig
  {
  public:
    AWS_COMPREHEND_API DocumentClassifierOutputDataConfig();
    AWS_COMPREHEND_API DocumentClassifierOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassifierOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When you use the <code>OutputDataConfig</code> object while creating a custom
     * classifier, you specify the Amazon S3 location where you want to write the
     * confusion matrix and other output files. The URI must be in the same Region as
     * the API endpoint that you are calling. The location is used as the prefix for
     * the actual location of this output file.</p> <p>When the custom classifier job
     * is finished, the service creates the output file in a directory specific to the
     * job. The <code>S3Uri</code> field contains the location of the output file,
     * called <code>output.tar.gz</code>. It is a compressed archive that contains the
     * confusion matrix.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object while creating a custom
     * classifier, you specify the Amazon S3 location where you want to write the
     * confusion matrix and other output files. The URI must be in the same Region as
     * the API endpoint that you are calling. The location is used as the prefix for
     * the actual location of this output file.</p> <p>When the custom classifier job
     * is finished, the service creates the output file in a directory specific to the
     * job. The <code>S3Uri</code> field contains the location of the output file,
     * called <code>output.tar.gz</code>. It is a compressed archive that contains the
     * confusion matrix.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object while creating a custom
     * classifier, you specify the Amazon S3 location where you want to write the
     * confusion matrix and other output files. The URI must be in the same Region as
     * the API endpoint that you are calling. The location is used as the prefix for
     * the actual location of this output file.</p> <p>When the custom classifier job
     * is finished, the service creates the output file in a directory specific to the
     * job. The <code>S3Uri</code> field contains the location of the output file,
     * called <code>output.tar.gz</code>. It is a compressed archive that contains the
     * confusion matrix.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object while creating a custom
     * classifier, you specify the Amazon S3 location where you want to write the
     * confusion matrix and other output files. The URI must be in the same Region as
     * the API endpoint that you are calling. The location is used as the prefix for
     * the actual location of this output file.</p> <p>When the custom classifier job
     * is finished, the service creates the output file in a directory specific to the
     * job. The <code>S3Uri</code> field contains the location of the output file,
     * called <code>output.tar.gz</code>. It is a compressed archive that contains the
     * confusion matrix.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object while creating a custom
     * classifier, you specify the Amazon S3 location where you want to write the
     * confusion matrix and other output files. The URI must be in the same Region as
     * the API endpoint that you are calling. The location is used as the prefix for
     * the actual location of this output file.</p> <p>When the custom classifier job
     * is finished, the service creates the output file in a directory specific to the
     * job. The <code>S3Uri</code> field contains the location of the output file,
     * called <code>output.tar.gz</code>. It is a compressed archive that contains the
     * confusion matrix.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object while creating a custom
     * classifier, you specify the Amazon S3 location where you want to write the
     * confusion matrix and other output files. The URI must be in the same Region as
     * the API endpoint that you are calling. The location is used as the prefix for
     * the actual location of this output file.</p> <p>When the custom classifier job
     * is finished, the service creates the output file in a directory specific to the
     * job. The <code>S3Uri</code> field contains the location of the output file,
     * called <code>output.tar.gz</code>. It is a compressed archive that contains the
     * confusion matrix.</p>
     */
    inline DocumentClassifierOutputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>When you use the <code>OutputDataConfig</code> object while creating a custom
     * classifier, you specify the Amazon S3 location where you want to write the
     * confusion matrix and other output files. The URI must be in the same Region as
     * the API endpoint that you are calling. The location is used as the prefix for
     * the actual location of this output file.</p> <p>When the custom classifier job
     * is finished, the service creates the output file in a directory specific to the
     * job. The <code>S3Uri</code> field contains the location of the output file,
     * called <code>output.tar.gz</code>. It is a compressed archive that contains the
     * confusion matrix.</p>
     */
    inline DocumentClassifierOutputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>When you use the <code>OutputDataConfig</code> object while creating a custom
     * classifier, you specify the Amazon S3 location where you want to write the
     * confusion matrix and other output files. The URI must be in the same Region as
     * the API endpoint that you are calling. The location is used as the prefix for
     * the actual location of this output file.</p> <p>When the custom classifier job
     * is finished, the service creates the output file in a directory specific to the
     * job. The <code>S3Uri</code> field contains the location of the output file,
     * called <code>output.tar.gz</code>. It is a compressed archive that contains the
     * confusion matrix.</p>
     */
    inline DocumentClassifierOutputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt the output results from an analysis job. The KmsKeyId
     * can be one of the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt the output results from an analysis job. The KmsKeyId
     * can be one of the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt the output results from an analysis job. The KmsKeyId
     * can be one of the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt the output results from an analysis job. The KmsKeyId
     * can be one of the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt the output results from an analysis job. The KmsKeyId
     * can be one of the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt the output results from an analysis job. The KmsKeyId
     * can be one of the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline DocumentClassifierOutputDataConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt the output results from an analysis job. The KmsKeyId
     * can be one of the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline DocumentClassifierOutputDataConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>ID for the Amazon Web Services Key Management Service (KMS) key that Amazon
     * Comprehend uses to encrypt the output results from an analysis job. The KmsKeyId
     * can be one of the following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS Key Alias: <code>"alias/ExampleAlias"</code> </p> </li>
     * <li> <p>ARN of a KMS Key Alias:
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul>
     */
    inline DocumentClassifierOutputDataConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline const Aws::String& GetFlywheelStatsS3Prefix() const{ return m_flywheelStatsS3Prefix; }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline bool FlywheelStatsS3PrefixHasBeenSet() const { return m_flywheelStatsS3PrefixHasBeenSet; }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline void SetFlywheelStatsS3Prefix(const Aws::String& value) { m_flywheelStatsS3PrefixHasBeenSet = true; m_flywheelStatsS3Prefix = value; }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline void SetFlywheelStatsS3Prefix(Aws::String&& value) { m_flywheelStatsS3PrefixHasBeenSet = true; m_flywheelStatsS3Prefix = std::move(value); }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline void SetFlywheelStatsS3Prefix(const char* value) { m_flywheelStatsS3PrefixHasBeenSet = true; m_flywheelStatsS3Prefix.assign(value); }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline DocumentClassifierOutputDataConfig& WithFlywheelStatsS3Prefix(const Aws::String& value) { SetFlywheelStatsS3Prefix(value); return *this;}

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline DocumentClassifierOutputDataConfig& WithFlywheelStatsS3Prefix(Aws::String&& value) { SetFlywheelStatsS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline DocumentClassifierOutputDataConfig& WithFlywheelStatsS3Prefix(const char* value) { SetFlywheelStatsS3Prefix(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_flywheelStatsS3Prefix;
    bool m_flywheelStatsS3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
