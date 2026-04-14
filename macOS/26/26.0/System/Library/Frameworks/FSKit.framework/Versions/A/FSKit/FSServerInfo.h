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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
