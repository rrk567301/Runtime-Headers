@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *containerIDs;
@property (copy, nonatomic) NSArray *applicationBundleIDs;
@property (nonatomic) unsigned long long enabledPermissions;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
