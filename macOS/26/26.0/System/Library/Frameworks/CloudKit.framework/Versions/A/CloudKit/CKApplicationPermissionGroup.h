@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *containerIDs;
@property (copy, nonatomic) NSArray *applicationBundleIDs;
@property (nonatomic) unsigned long long enabledPermissions;

- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
