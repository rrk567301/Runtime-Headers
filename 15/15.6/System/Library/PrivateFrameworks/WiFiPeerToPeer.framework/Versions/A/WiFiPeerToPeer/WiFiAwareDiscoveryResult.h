@class NSString, WiFiAwarePublishServiceSpecificInfo, WiFiMACAddress, WiFiAwarePairingConfiguration;

@interface WiFiAwareDiscoveryResult : NSObject <NSSecureCoding, NSCopying> {
    long long _datapathCipherSuite;
    long long _fsdFunction;
    unsigned char _subscribeID;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo;
@property (readonly, nonatomic) unsigned char publishID;
@property (readonly, nonatomic) WiFiMACAddress *publisherAddress;
@property (readonly, nonatomic) char datapathSupported;
@property (readonly, nonatomic) char datapathSecurityRequired;
@property (readonly, nonatomic) char furtherServiceDiscoveryRequired;
@property (readonly, nonatomic) long long rssi;
@property (readonly, nonatomic) char pairSetupRequired;
@property (readonly, nonatomic) WiFiAwarePairingConfiguration *pairingConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)datapathCipherSuite;
- (long long)fsdFunction;
- (const char *)fsdFunctionString;
- (id)initWithServiceName:(id)a0 serviceSpecificInfo:(id)a1 publishID:(unsigned char)a2 subscribeID:(unsigned char)a3 publisherAddressKey:(id)a4 datapathSupported:(char)a5 datapathCipherSuite:(long long)a6 fsdFunction:(long long)a7 rssi:(long long)a8 pairSetupRequired:(char)a9 pairingConfiguration:(id)a10;
- (char)serviceSpecificInfoEqual:(id)a0;
- (unsigned char)subscribeID;

@end
