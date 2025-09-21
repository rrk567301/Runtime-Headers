@class NSString, CKContainerID, CKOperationConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property (getter=isManateeContainer) BOOL manateeContainer;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property long long subscriptionPushRegistrationAction;
@property (retain) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly, copy) CKContainerID *containerID;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContainerID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;

@end
