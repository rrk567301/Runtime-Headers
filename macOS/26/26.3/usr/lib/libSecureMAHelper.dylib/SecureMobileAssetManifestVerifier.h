@class NSMutableDictionary;

@interface SecureMobileAssetManifestVerifier : NSObject

@property (retain) NSMutableDictionary *cachedManifestVerificationResults;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_logBase64Data:(id)a0 description:(id)a1;
- (id)_manifestDigest:(id)a0;
- (int)_verifyPlist:(id)a0 manifest:(id)a1 manifestType:(unsigned long long)a2 result:(id *)a3;
- (BOOL)verifyManifest:(id)a0 manifestType:(unsigned long long)a1;
- (BOOL)verifyPlist:(id)a0 manifest:(id)a1 manifestType:(unsigned long long)a2 result:(id *)a3 error:(id *)a4;

@end
