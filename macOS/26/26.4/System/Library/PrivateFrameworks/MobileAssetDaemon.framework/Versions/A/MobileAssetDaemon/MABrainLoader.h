@class NSString;

@interface MABrainLoader : NSObject

@property BOOL externalBrainLoaded;
@property (retain) NSString *brainAssetIdentifier;
@property (retain) NSString *brainBuildVersion;
@property (retain) NSString *brainBuildVersionForLatestLoadAttempt;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)loadBrainFromBundleAtPath:(id)a0 brainLoadRequirements:(unsigned long long *)a1 outError:(id *)a2;
- (BOOL)loadCryptex:(BOOL)a0 bundle:(id)a1 bundleName:(id)a2 needPersonalization:(BOOL *)a3 outError:(id *)a4;
- (BOOL)loadTrustCache:(BOOL)a0 bundle:(id)a1 bundleName:(id)a2 needsUnlock:(BOOL *)a3 outError:(id *)a4;
- (BOOL)selectAndLoadBrain:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)verifyBundle:(id)a0;

@end
