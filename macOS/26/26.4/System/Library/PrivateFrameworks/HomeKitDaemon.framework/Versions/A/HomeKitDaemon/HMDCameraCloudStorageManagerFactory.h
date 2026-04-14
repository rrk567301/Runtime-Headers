@protocol HMDCameraCloudStorageManaging;

@interface HMDCameraCloudStorageManagerFactory : HMFObject

@property (class, nonatomic, readonly) id<HMDCameraCloudStorageManaging> defaultManager;

- (id)init;

@end
