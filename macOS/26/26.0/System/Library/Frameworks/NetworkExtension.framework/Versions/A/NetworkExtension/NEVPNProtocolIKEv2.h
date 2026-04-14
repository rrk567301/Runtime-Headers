@class NSString, NSArray, NEVPNIKEv2PPKConfiguration, NEVPNIKEv2SecurityAssociationParameters;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec {
    BOOL _wakeForRekey;
    BOOL _strictAlgorithmSelection;
}

@property (readonly) NSString *pluginType;
@property (retain) NSArray *IKESecurityAssociationParametersArray;
@property (retain) NSArray *childSecurityAssociationParametersArray;
@property (copy) NSString *providerBundleIdentifier;
@property int natKeepAliveOffloadEnable;
@property int natKeepAliveOffloadInterval;
@property int disableMOBIKERetryOnWake;
@property BOOL opportunisticPFS;
@property long long tunnelKind;
@property BOOL disableInitialContact;
@property long long deadPeerDetectionRate;
@property (copy) NSString *serverCertificateIssuerCommonName;
@property (copy) NSString *serverCertificateCommonName;
@property long long certificateType;
@property BOOL useConfigurationAttributeInternalIPSubnet;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters;
@property BOOL disableMOBIKE;
@property BOOL disableRedirect;
@property BOOL enablePFS;
@property BOOL allowPostQuantumKeyExchangeFallback;
@property BOOL enableRevocationCheck;
@property BOOL strictRevocationCheck;
@property long long minimumTLSVersion;
@property long long maximumTLSVersion;
@property BOOL enableFallback;
@property unsigned long long mtu;
@property (copy) NEVPNIKEv2PPKConfiguration *ppkConfiguration;

+ (BOOL)supportsSecureCoding;

- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)setDefaultsForUIConfiguration;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;

@end
