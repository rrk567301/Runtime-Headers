@class NSString;

@interface ML3DatabasePrivacyContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;

+ (id)sharedContext;
+ (void)logDatabasePrivacyAccessWithAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)initWithClientIdentity:(id)a0;
- (void)logDatabasePrivacyAccess;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_initWithPAApplication:(id)a0;
- (id)initWithCoder:(id)a0;

@end
