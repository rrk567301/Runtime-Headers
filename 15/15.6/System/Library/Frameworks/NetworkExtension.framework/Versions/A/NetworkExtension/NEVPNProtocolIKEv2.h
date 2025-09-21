@class NSString, NSArray, NEVPNIKEv2PPKConfiguration, NEVPNIKEv2SecurityAssociationParameters;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec {
    char _wakeForRekey;
    char _strictAlgorithmSelection;
}

@property (readonly) NSString *pluginType;
@property (retain) NSArray *IKESecurityAssociationParametersArray;
@property (retain) NSArray *childSecurityAssociationParametersArray;
@property (copy) NSString *providerBundleIdentifier;
@property int natKeepAliveOffloadEnable;
@property int natKeepAliveOffloadInterval;
@property int disableMOBIKERetryOnWake;
@property char opportunisticPFS;
@property long long tunnelKind;
@property char disableInitialContact;
@property long long deadPeerDetectionRate;
@property (copy) NSString *serverCertificateIssuerCommonName;
@property (copy) NSString *serverCertificateCommonName;
@property long long certificateType;
@property char useConfigurationAttributeInternalIPSubnet;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters;
@property char disableMOBIKE;
@property char disableRedirect;
@property char enablePFS;
@property char enableRevocationCheck;
@property char strictRevocationCheck;
@property long long minimumTLSVersion;
@property long long maximumTLSVersion;
@property char enableFallback;
@property unsigned long long mtu;
@property (copy) NEVPNIKEv2PPKConfiguration *ppkConfiguration;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (char)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)setDefaultsForUIConfiguration;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;

@end
