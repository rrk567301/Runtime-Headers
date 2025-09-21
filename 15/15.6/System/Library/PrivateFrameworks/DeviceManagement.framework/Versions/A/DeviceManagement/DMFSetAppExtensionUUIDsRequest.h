@class NSString;

@interface DMFSetAppExtensionUUIDsRequest : DMFAppRequest

@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSString *cellularSliceUUIDString;
@property (copy, nonatomic) NSString *contentFilterUUIDString;
@property (copy, nonatomic) NSString *DNSProxyUUIDString;
@property (copy, nonatomic) NSString *relayUUIDString;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
