@class NSNumber, NSArray, NEIKEv2AuthenticationProtocol, NSString, NSData, NEIKEv2Identifier, NEIKEv2ConfigurationMessage;

@interface NEIKEv2SessionConfiguration : NSObject <NEPrettyDescription, NSCopying> {
    NEIKEv2ConfigurationMessage *_configurationRequest;
    NEIKEv2ConfigurationMessage *_configurationReply;
}

@property (retain) NEIKEv2Identifier *localIdentifier;
@property (retain) NEIKEv2Identifier *remoteIdentifier;
@property char initialContactDisabled;
@property char negotiateMOBIKE;
@property (retain) NSArray *additionalMOBIKEAddresses;
@property char natTraversalKeepaliveDisabled;
@property char natTraversalKeepaliveEnabled;
@property unsigned long long natTraversalKeepaliveInterval;
@property char natTraversalKeepaliveOffloadEnabled;
@property unsigned long long natTraversalKeepaliveOffloadInterval;
@property char deadPeerDetectionEnabled;
@property unsigned long long deadPeerDetectionInterval;
@property unsigned long long deadPeerDetectionRetryIntervalMilliseconds;
@property unsigned int deadPeerDetectionMaxRetryCount;
@property unsigned int deadPeerDetectionMaxRetryCountBeforeReporting;
@property unsigned long long deadPeerDetectionReceiveIntervalTriggerReporting;
@property unsigned int deadPeerDetectionReceiveMaxShortDPDBeforeReporting;
@property char idleTimeoutEnabled;
@property unsigned long long idleTimeoutSeconds;
@property char blackholeDetectionEnabled;
@property (retain) NEIKEv2AuthenticationProtocol *authenticationProtocol;
@property (retain) NEIKEv2AuthenticationProtocol *remoteAuthentication;
@property (retain) NSString *localPrivateEAPIdentity;
@property (retain) NSData *localEncryptedEAPIdentity;
@property (retain) NSString *username;
@property (retain) NSString *password;
@property (retain) NSData *passwordReference;
@property (retain) NSData *sharedSecret;
@property (retain) NSData *sharedSecretReference;
@property (retain) NSString *localCertificateName;
@property (retain) NSData *localCertificateReference;
@property (retain) NSData *localCertificateKeyReference;
@property char localCertificateIsModernSystem;
@property (retain) NSString *remoteCertificateHostname;
@property (retain) NSString *remoteCertificateAuthorityName;
@property (retain) NSArray *remoteCertificateAuthorityReferences;
@property (retain) NSData *remoteCertificateAuthorityHash;
@property char enableCertificateRevocationCheck;
@property char strictCertificateRevocationCheck;
@property char disableRemoteCertificateValidation;
@property (retain) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *localPrivateKeyRef;
@property (retain) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *remotePublicKeyRef;
@property (retain) NSString *tlsMinimumVersion;
@property (retain) NSString *tlsMaximumVersion;
@property (retain) NEIKEv2ConfigurationMessage *configurationRequest;
@property (retain) NEIKEv2ConfigurationMessage *configurationReply;
@property (retain) NSArray *customIKEAuthPayloads;
@property (retain) NSArray *customIKEAuthVendorPayloads;
@property (retain, nonatomic) NSArray *customIKEAuthPrivateNotifies;
@property (retain) NSNumber *pduSessionID;
@property (retain) NSString *IMEI;
@property (retain) NSString *IMEISV;
@property (retain) NSData *ppk;
@property (retain) NSData *ppkReference;
@property unsigned long long ppkIDType;
@property (retain) NSData *ppkID;
@property char ppkMandatory;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
