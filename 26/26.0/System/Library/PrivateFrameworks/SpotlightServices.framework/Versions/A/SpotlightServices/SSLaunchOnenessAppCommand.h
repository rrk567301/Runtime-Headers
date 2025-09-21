@class NSString;

@interface SSLaunchOnenessAppCommand : SFCommand <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *applicationBundleId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplicationBundleId:(id)a0;

@end
