@class NSError, NSString, PLInternalResource, PLAssetResourceUploadJobConfiguration, NSDate, PLAssetResourceUploadJobRequest, NSData;

@interface PLAssetResourceUploadJob : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (nonatomic) short attemptCount;
@property (nonatomic) short state;
@property (nonatomic) short clientStatus;
@property (nonatomic) short type;
@property (retain, nonatomic) PLInternalResource *assetResource;
@property (retain, nonatomic) PLAssetResourceUploadJobConfiguration *configuration;
@property (retain, nonatomic) PLAssetResourceUploadJobRequest *request;
@property (retain, nonatomic) NSData *errorData;
@property (retain, nonatomic) NSData *urlRequestData;
@property (retain, nonatomic) NSData *responseHeaderData;
@property (retain, nonatomic) NSError *error;

+ (id)entityName;
+ (unsigned long long)countOfUploadJobsWithConfiguration:(id)a0 states:(id)a1 inPhotoLibrary:(id)a2 error:(id *)a3;
+ (id)predicateForAcknowledgeableJobs;
+ (unsigned long long)_countOfUploadJobsWithPredicate:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;
+ (unsigned long long)_deleteUploadJobsMatchingPredicate:(id)a0 inPhotoLibrary:(id)a1;
+ (void)_signalPendingBackgroundUploadWorkItemForLibrary:(id)a0;
+ (id)_uploadJobsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inPhotoLibrary:(id)a3 error:(id *)a4;
+ (unsigned long long)countOfAcknowledgedUploadJobsWithConfiguration:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;
+ (unsigned long long)countOfUploadJobsRequiringAcknowledgementWithConfiguration:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;
+ (unsigned long long)countOfUploadJobsWithConfiguration:(id)a0 state:(short)a1 inPhotoLibrary:(id)a2 error:(id *)a3;
+ (BOOL)deleteAllJobsForConfiguration:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
+ (unsigned long long)deleteUploadJobsWithConfiguration:(id)a0 inPhotoLibrary:(id)a1;
+ (unsigned long long)deleteUploadJobsWithConfiguration:(id)a0 state:(short)a1 inPhotoLibrary:(id)a2;
+ (unsigned long long)deleteUploadJobsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)insertInManagedObjectContext:(id)a0 withUUID:(id)a1;
+ (id)uploadJobsWithConfiguration:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;
+ (id)uploadJobsWithConfiguration:(id)a0 state:(short)a1 sortDescriptors:(id)a2 limit:(unsigned long long)a3 inPhotoLibrary:(id)a4 error:(id *)a5;
+ (id)uploadJobsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;

- (void)delete;
- (void)willSave;
- (void)updateState:(short)a0;
- (id)uuidDescription;
- (id)_createUploadJobRequestIfNeeded;
- (void)_postCancellationNotification;

@end
