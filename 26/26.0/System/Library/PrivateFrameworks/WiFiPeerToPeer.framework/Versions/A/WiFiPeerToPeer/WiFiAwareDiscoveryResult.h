@class NSString, WiFiAwarePublishServiceSpecificInfo, WiFiMACAddress, WiFiAwarePairingConfiguration, NSUUID;

@interface WiFiAwareDiscoveryResult : NSObject <NSSecureCoding, NSCopying> {
    long long _datapathCipherSuite;
    long long _fsdFunction;
    unsigned char _subscribeID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo;
@property (readonly, nonatomic) unsigned char publishID;
@property (readonly, nonatomic) WiFiMACAddress *publisherAddress;
@property (readonly, nonatomic) BOOL datapathSupported;
@property (readonly, nonatomic) BOOL datapathSecurityRequired;
@property (readonly, nonatomic) BOOL furtherServiceDiscoveryRequired;
@property (readonly, nonatomic) long long rssi;
@property (readonly, nonatomic) BOOL pairSetupRequired;
@property (readonly, nonatomic) WiFiAwarePairingConfiguration *pairingConfiguration;
@property (readonly, nonatomic) NSUUID *pairedUUID;
@property (readonly, nonatomic) NSString *pairedDeviceName;
@property (readonly, nonatomic) long long signature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)datapathCipherSuite;
- (long long)fsdFunction;
- (const char *)fsdFunctionString;
- (id)initWithServiceName:(id)a0 serviceSpecificInfo:(id)a1 publishID:(unsigned char)a2 subscribeID:(unsigned char)a3 publisherAddressKey:(id)a4 datapathSupported:(BOOL)a5 datapathCipherSuite:(long long)a6 fsdFunction:(long long)a7 rssi:(long long)a8 pairSetupRequired:(BOOL)a9 pairingConfiguration:(id)a10 pairedUUID:(id)a11 pairedDeviceName:(id)a12 signature:(long long)a13;
- (BOOL)serviceSpecificInfoEqual:(id)a0;
- (unsigned char)subscribeID;

@end
