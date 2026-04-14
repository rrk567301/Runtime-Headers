@class NSString, NSURL;

@interface ATXAppIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) ATXAppIdentity *currentAppIdentity;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) unsigned long long appType;

+ (id)descriptionForAppType:(unsigned long long)a0;

- (id)initWithBundleIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleURL:(id)a0;
- (id)_initWithBundleIdentifier:(id)a0 bundleURL:(id)a1 appType:(unsigned long long)a2;
- (id)bundleIDWithRelevantPrefix;
- (id)initWithBundleIdentifier:(id)a0 appType:(unsigned long long)a1;
- (id)initWithBundleURL:(id)a0 appType:(unsigned long long)a1;
- (BOOL)isEqualToATXAppIdentity:(id)a0;

@end
