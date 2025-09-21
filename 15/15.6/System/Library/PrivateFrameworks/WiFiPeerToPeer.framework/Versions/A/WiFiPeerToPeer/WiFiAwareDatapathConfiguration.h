@class WiFiAwareDiscoveryResult, NSString, WiFiAwarePublishDatapathServiceSpecificInfo, NSData, WiFiAwareInternetSharingConfiguration, WiFiAwarePublishServiceSpecificInfo;

@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) NSString *passphrase;
@property (readonly, nonatomic) NSData *pmk;
@property (readonly, nonatomic) NSData *pmkID;
@property (copy, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;
@property (copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration;
@property (readonly) long long pairingMethod;
@property (readonly) char pairingCachingEnabled;
@property (readonly) WiFiAwarePublishServiceSpecificInfo *pairSetupServiceSpecificInfo;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDiscoveryResult:(id)a0 serviceType:(long long)a1 passphrase:(id)a2 pmk:(id)a3 pmkID:(id)a4 serviceSpecificInfo:(id)a5 internetSharingConfiguration:(id)a6 pairingMethod:(long long)a7 pairingCachingEnabled:(char)a8 pairSetupServiceSpecificInfo:(id)a9;
- (char)internetSharingEqual:(id)a0;
- (char)pairSetupServiceSpecificInfoEqual:(id)a0;
- (char)passphraseEqual:(id)a0;
- (char)pmkEqual:(id)a0;
- (char)pmkIDEqual:(id)a0;
- (char)serviceSpecificInfoEqual:(id)a0;

@end
