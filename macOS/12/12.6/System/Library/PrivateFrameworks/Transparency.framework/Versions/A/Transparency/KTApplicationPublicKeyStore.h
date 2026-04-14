@class NSData, NSString, NSArray, KTContextStore, TransparencyTrustedKeyStore, NSDate, NSDictionary, VRFPublicKey;

@interface KTApplicationPublicKeyStore : NSObject

@property (retain) NSString *application;
@property (retain) NSData *patConfigProof;
@property (retain) NSData *tltConfigProof;
@property (retain) NSData *patClosedProof;
@property (retain) VRFPublicKey *vrfKey;
@property int vrfType;
@property (retain) NSDictionary *trustedAppSigningKeys;
@property (retain) NSArray *trustedAppLeafs;
@property (retain) NSDictionary *trustedTltSigningKeys;
@property (retain) NSArray *trustedTltLeafs;
@property (retain) NSArray *trustedIntermediates;
@property (retain) TransparencyTrustedKeyStore *appSmtKeyStore;
@property (retain) TransparencyTrustedKeyStore *appSthKeyStore;
@property (retain) TransparencyTrustedKeyStore *tltKeyStore;
@property unsigned long long tltLogBeginningMs;
@property unsigned long long patLogBeginningMs;
@property int tltEarliestVersion;
@property int patEarliestVersion;
@property BOOL unsupported;
@property unsigned long long shutDown;
@property (weak) KTContextStore *contextStore;
@property (readonly) BOOL ready;
@property (readonly) BOOL inResetWindow;
@property (readonly) KTContextStore *store;
@property (retain) NSDate *receiptTime;

- (void).cxx_destruct;
- (void)clearState:(id *)a0;
- (BOOL)triggerRefreshFromServerStatus:(int)a0;
- (void)notifyTreeResetDetected:(BOOL)a0;
- (BOOL)verifyConfigProof:(id)a0 dataStore:(id)a1 saveTreeHeads:(BOOL)a2 error:(id *)a3;
- (id)createTrustedSthKeyStoreFromProofSPKI:(id)a0 signingKeysMap:(id)a1 error:(id *)a2;
- (id)copyVRFKeyFromConfigProof:(id)a0 error:(id *)a1;
- (BOOL)detectEpochChangeAndResetData:(unsigned long long)a0 patLogBeginningMs:(unsigned long long)a1 dataStore:(id)a2 error:(id *)a3;
- (BOOL)verifyCertificates:(id)a0 intermediates:(id)a1 application:(id)a2 error:(id *)a3;
- (BOOL)processTltConfigProof:(id)a0 dataStore:(id)a1 saveTreeHeads:(BOOL)a2 error:(id *)a3;
- (BOOL)processPatConfigProof:(id)a0 dataStore:(id)a1 saveTreeHeads:(BOOL)a2 error:(id *)a3;
- (BOOL)processPatClosedProof:(id)a0 dataStore:(id)a1 saveTreeHeads:(BOOL)a2 error:(id *)a3;
- (BOOL)processKeyData:(id)a0 tltLeafs:(id)a1 intermediates:(id)a2 patConfigProof:(id)a3 tltConfigProof:(id)a4 patClosedProof:(id)a5 dataStore:(id)a6 saveTreeHeads:(BOOL)a7 error:(id *)a8;
- (BOOL)processPublicKeysResponse:(id)a0 dataStore:(id)a1 error:(id *)a2;
- (void)startKeyStoreStateSampler;
- (BOOL)processDiskState:(id)a0 dataStore:(id)a1 error:(id *)a2;
- (id)copyKeyStoreState;
- (id)initWithApplication:(id)a0 dataStore:(id)a1 response:(id)a2 contextStore:(id)a3 error:(id *)a4;
- (id)initWithApplication:(id)a0 dataStore:(id)a1 diskState:(id)a2 contextStore:(id)a3 error:(id *)a4;
- (id)createTLTApplicationPublicKeyStore;

@end
