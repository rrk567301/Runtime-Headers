@class NSString;

@interface AKPrivateEmailContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *proxiedAppID;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (copy, nonatomic) NSString *proxiedAppName;
@property (readonly, copy, nonatomic) NSString *upgradeBundleIdentifier;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (id)initWithContext:(id)a0 bundleID:(id)a1;
- (id)initWithKey:(id)a0 altDSID:(id)a1;
- (id)initWithContext:(id)a0 client:(id)a1;

@end
