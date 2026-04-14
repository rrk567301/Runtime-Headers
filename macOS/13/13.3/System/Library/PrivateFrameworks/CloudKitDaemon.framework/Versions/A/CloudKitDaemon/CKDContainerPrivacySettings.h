@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject

@property (copy, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) NSSet *applicationBundleIDs;
@property (nonatomic) long long discoverable;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;

@end
