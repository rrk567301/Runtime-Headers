@class NSString;

@interface CHIPPluginMatterKeypair : HMFObject <HMFLogging, MTRKeypair>

@property BOOL initialized;
@property (readonly) struct __SecKey { } *privateKey;
@property (readonly) struct __SecKey { } *publicKey;
@property (retain) NSString *keychainAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)initialize;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithAccount:(id)a0;
- (BOOL)reload;
- (id)logIdentifier;
- (BOOL)deserialize:(id)a0;
- (id)signMessageECDSA_DER:(id)a0;
- (struct __SecKey { } *)pubkey;
- (BOOL)_storePrivateKeyData:(id)a0;
- (BOOL)_generateKeys;
- (id)_getPrivateKeydata;
- (BOOL)_reloadWithData:(id)a0;

@end
