@class NSString, PLInternalResource, NSData, NSDate, PLAssetResourceUploadJobConfiguration;

@interface PLAssetResourceUploadJob : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSData *requestData;
@property (retain, nonatomic) NSDate *lastRetryDate;
@property (nonatomic) int failedAttemptCount;
@property (nonatomic) unsigned short state;
@property (retain, nonatomic) PLInternalResource *assetResource;
@property (retain, nonatomic) PLAssetResourceUploadJobConfiguration *configuration;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1;
+ (unsigned long long)_deleteUploadJobsMatchingPredicate:(id)a0 inPhotoLibrary:(id)a1;
+ (id)_uploadJobsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inManagedObjectContext:(id)a3;
+ (unsigned long long)deleteUploadJobsWithConfiguration:(id)a0 inPhotoLibrary:(id)a1;
+ (unsigned long long)deleteUploadJobsWithConfiguration:(id)a0 withState:(unsigned short)a1 inPhotoLibrary:(id)a2;
+ (unsigned long long)deleteUploadJobsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)uploadJobsWithConfiguration:(id)a0 inPhotoLibrary:(id)a1;
+ (id)uploadJobsWithConfiguration:(id)a0 withState:(unsigned short)a1 inPhotoLibrary:(id)a2;
+ (id)uploadJobsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;

- (void)willSave;
- (void)delete;

@end
