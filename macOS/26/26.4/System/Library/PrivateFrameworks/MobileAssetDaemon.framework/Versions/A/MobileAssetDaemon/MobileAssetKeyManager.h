@class NSURLSession, MAKeyManagerDownloadSessionDelegate, NSURLSessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface MobileAssetKeyManager : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *keyManagerQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *ssoQueue;
@property (retain, nonatomic) NSURLSession *knoxSession;
@property (retain, nonatomic) NSURLSessionConfiguration *knoxSessionConfig;
@property (retain, nonatomic) MAKeyManagerDownloadSessionDelegate *downloadSessionDelegate;
@property (nonatomic) long long retryCount;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appendPEMEncodedCertificate:(struct __SecCertificate { } *)a0 toString:(id)a1;
- (void)appendPEMEncodedData:(id)a0 type:(id)a1 toString:(id)a2;
- (id)base64EncodedStringFromString:(id)a0;
- (id)buildKeyManagerError:(long long)a0 underlying:(id)a1 description:(id)a2;
- (id)copyDawToken:(BOOL)a0 useAppleConnect:(BOOL)a1 error:(id *)a2;
- (id)copyDawTokenFileName;
- (id)copyDawTokenFromOverrides;
- (id)copyDawTokenInternal:(BOOL)a0 useAppleConnect:(BOOL)a1 error:(id *)a2;
- (id)copyPersonalizationSSOToken:(BOOL)a0 error:(id *)a1;
- (id)copyPersonalizationSSOTokenInternal:(BOOL)a0 error:(id *)a1;
- (id)copyPreferencesValue:(id)a0;
- (id)createGetDecryptionKeyRequestForKnox:(id)a0 authData:(id)a1 keyFetchBaseURLString:(id)a2 assetAttributes:(id)a3 error:(id *)a4;
- (BOOL)decryptContentEncryptedAssetAtURL:(id)a0 assetAttributes:(id)a1 error:(id *)a2;
- (BOOL)decryptFileAtURL:(id)a0 metadata:(id)a1 key:(id)a2 error:(id *)a3;
- (id)fetchDSMEKey;
- (id)getDecryptionKey:(id)a0 downloadAuthorizationHeader:(id)a1 skipKnoxLookup:(BOOL)a2 disableUI:(BOOL)a3 error:(id *)a4;
- (id)getDecryptionKey:(id)a0 downloadOptions:(id)a1 skipKnoxLookup:(BOOL)a2 disableUI:(BOOL)a3 error:(id *)a4;
- (id)getDecryptionKeyFromAssetMetadataOrDownloadOptions:(id)a0 downloadOptions:(id)a1 error:(id *)a2;
- (id)getDecryptionKeyFromAssetMetadataOrDownloadOptionsInternal:(id)a0 downloadOptions:(id)a1 error:(id *)a2;
- (id)getDecryptionKeyFromKnoxUsingAssetAttributes:(id)a0 downloadOptions:(id)a1 disableUI:(BOOL)a2 error:(id *)a3;
- (id)getDecryptionKeyFromKnoxUsingAssetAttributesInternal:(id)a0 downloadOptions:(id)a1 disableUI:(BOOL)a2 error:(id *)a3;
- (BOOL)isUserInteractionAllowedForAssetType:(id)a0;
- (BOOL)isWellFormedTokenFileName:(id)a0;
- (BOOL)keyManagerResult:(long long)a0 underlying:(id)a1 description:(id)a2 error:(id *)a3;
- (id)normalizedAuthToken:(id)a0 source:(id)a1;
- (id)requestServerForDecryptionKey:(id)a0 recipientPrivateKey:(struct __SecKey { } *)a1 downloadOptions:(id)a2 disableUI:(BOOL)a3 err:(id *)a4;
- (BOOL)shouldDisableUIForUsage:(id)a0 assetAttributes:(id)a1 downloadOptions:(id)a2;

@end
