@class NSString;

@interface SSLaunchOnenessAppCommand : SFCommand <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *applicationBundleId;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithApplicationBundleId:(id)a0;

@end
