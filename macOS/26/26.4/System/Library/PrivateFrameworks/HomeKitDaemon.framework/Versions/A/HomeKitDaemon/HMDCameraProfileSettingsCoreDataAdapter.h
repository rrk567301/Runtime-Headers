@class NSUUID, NSString;
@protocol HMDFeaturesDataSource;

@interface HMDCameraProfileSettingsCoreDataAdapter : HMFObject <HMFLogging>

@property (readonly) NSUUID *hapAccessoryUUID;
@property (readonly) NSUUID *homeUUID;
@property (readonly) NSUUID *cameraProfileSettingsModelID;
@property (readonly) NSUUID *derivedPropertiesModelID;
@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)fetchCameraProfileSettingsModelWithError:(id *)a0;
- (id)fetchDerivedPropertiesModelWithError:(id *)a0;
- (id)initWithHAPAccessoryUUID:(id)a0 homeUUID:(id)a1 cameraProfileSettingsModelID:(id)a2 derivedPropertiesModelID:(id)a3;
- (id)initWithHAPAccessoryUUID:(id)a0 homeUUID:(id)a1 cameraProfileSettingsModelID:(id)a2 derivedPropertiesModelID:(id)a3 featuresDataSource:(id)a4;
- (void)updateCameraProfileSettingsModel:(id)a0 completion:(id /* block */)a1;
- (void)updateDerivedPropertiesModel:(id)a0 completion:(id /* block */)a1;

@end
