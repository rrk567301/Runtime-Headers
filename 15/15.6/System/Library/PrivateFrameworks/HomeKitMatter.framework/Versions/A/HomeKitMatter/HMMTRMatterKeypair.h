@class NSString, NSData;

@interface HMMTRMatterKeypair : HMFObject <HMFLogging, MTRKeypair> {
    struct __SecKey { } *_operationalKey;
}

@property char initialized;
@property (readonly) unsigned long long version;
@property (readonly) struct __SecKey { } *publicKey;
@property (retain) NSString *keychainAccount;
@property (retain) NSData *keyRepr;
@property (retain) NSData *opKeyRepr;
@property (readonly) char deviceLocal;
@property (readonly) struct __SecKey { } *privateKey;
@property struct __SecKey { } *operationalKey;
@property (readonly, copy) NSData *rootCert;
@property (readonly, copy) NSData *operationalCert;
@property (readonly, copy) NSData *ipk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithAccount:(id)a0;
- (char)deserialize:(id)a0;
- (id)logIdentifier;
- (id)initWithTLVData:(id)a0;
- (id)initWithPrivateKey:(struct __SecKey { } *)a0;
- (id)initUnassociated;
- (id)initWithPrivateKeyExternalRepresentation:(id)a0;
- (struct __SecKey { } *)copyPublicKey;
- (id)signMessageECDSA_DER:(id)a0;
- (char)_generateKeys;
- (id)_getPrivateKeydata;
- (char)_reloadWithData:(id)a0;
- (char)_reloadWithDictionary:(id)a0;
- (char)_storePrivateKeyData:(id)a0;
- (id)archiveV1KeyItemValue;
- (id)copyV0KeyPair;
- (struct __SecKey { } *)createPrivateKeyWithData:(id)a0;
- (id)initAsDeviceLocal;
- (id)initWithV0Account:(id)a0;
- (id)initWithV0Account:(id)a0 privateKey:(struct __SecKey { } *)a1;
- (id)initWithV1Account:(id)a0;
- (id)initWithV1Account:(id)a0 privateKey:(struct __SecKey { } *)a1 operationalKey:(struct __SecKey { } *)a2 rootCert:(id)a3 operationalCert:(id)a4 ipk:(id)a5;
- (char)initializeAllowingNew:(char)a0;
- (struct __SecKey { } *)operationalKey;
- (struct __SecKey { } *)pubkey;
- (void)setOperationalKey:(struct __SecKey { } *)a0;
- (id)unarchiveV1KeyItemValue:(id)a0;
- (char)updateStorageWithPrivateKeyData:(id)a0;

@end
