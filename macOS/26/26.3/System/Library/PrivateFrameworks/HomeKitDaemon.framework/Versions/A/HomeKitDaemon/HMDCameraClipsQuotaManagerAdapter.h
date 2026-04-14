@class NSString, HMDCameraClipsQuotaManager;

@interface HMDCameraClipsQuotaManagerAdapter : HMFObject <HMDCameraCloudStorageManaging>

@property (readonly) HMDCameraClipsQuotaManager *quotaManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)disableCloudStorageForZoneWithName:(id)a0;
- (id)enableCloudStorageForZoneWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fetchNamesForZonesWithEnabledCloudStorage;
- (void)synchronize;
- (id)disableCloudStorageForCamera:(id)a0;
- (id)enableCloudStorageForCamera:(id)a0;
- (id)initWithQuotaManager:(id)a0;

@end
