@class NSString, NSDictionary;

@interface FSServerInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long flags;
@property (copy) NSString *displayName;
@property (copy) NSString *supportedMechTypes;
@property (copy) NSDictionary *authenticationInfo;
@property (copy) NSString *machineType;
@property (copy) NSString *serverOS;
@property (copy) NSString *proxyServerName;
@property (copy) NSString *proxyServerRealm;

- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
