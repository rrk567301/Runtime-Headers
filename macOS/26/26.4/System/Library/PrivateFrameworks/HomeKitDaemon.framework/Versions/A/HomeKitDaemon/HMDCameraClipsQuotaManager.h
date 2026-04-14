@class NSString;
@protocol HMDDatabase;

@interface HMDCameraClipsQuotaManager : NSObject <HMDDatabaseDelegate, HMFLogging, HMDCameraCloudStorageManaging>

@property (class, readonly) HMDCameraClipsQuotaManager *defaultManager;

@property (readonly) id<HMDDatabase> database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_quotaErrorFromServerError:(id)a0;
+ (id)_quotaServerErrorFromServerError:(id)a0;

- (id)initWithDatabase:(id)a0;
- (void)synchronize;
- (id)database:(id)a0 willRemoveZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (void)cleanUpOrphanedCloudStorageForCameras:(id)a0 completion:(id /* block */)a1;
- (void)fetchNamesForZonesWithEnabledCloudStorageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)_addCodeOperationWithFunctionName:(id)a0 request:(id)a1 responseClass:(Class)a2;
- (void)isCloudStorageEnabledForCamera:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)disableCloudStorageForZoneWithName:(id)a0 completion:(id /* block */)a1;
- (void)enableCloudStorageForZoneWithName:(id)a0 completion:(id /* block */)a1;
- (void)disableCloudStorageForCamera:(id)a0 completion:(id /* block */)a1;
- (void)enableCloudStorageForCamera:(id)a0 completion:(id /* block */)a1;

@end
