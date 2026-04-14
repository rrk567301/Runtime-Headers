@class NSSet, NSError;
@protocol HMDCameraCloudStorageCapable;

@interface _TtCO13HomeKitDaemon18CameraCloudStorage7Manager : HMFObject <HMDCameraCloudStorageManaging> {
    void /* unknown type, empty encoding */ quotaManager;
    void /* unknown type, empty encoding */ authorizationManager;
}

- (void)synchronize;
- (void)cleanUpOrphanedCloudStorageForCameras:(NSSet *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void).cxx_destruct;
- (void)isCloudStorageEnabledForCamera:(id<HMDCameraCloudStorageCapable>)a0 completion:(void (^)(BOOL, NSError *))a1;
- (id)init;
- (void)disableCloudStorageForCamera:(id<HMDCameraCloudStorageCapable>)a0 completion:(void (^)(NSError *))a1;
- (void)enableCloudStorageForCamera:(id<HMDCameraCloudStorageCapable>)a0 completion:(void (^)(NSError *))a1;

@end
