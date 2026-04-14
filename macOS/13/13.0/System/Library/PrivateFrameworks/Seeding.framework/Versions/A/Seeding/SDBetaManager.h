@class NSArray, NSDate;

@interface SDBetaManager : NSObject

@property (retain, nonatomic) NSArray *cachedPrograms;
@property (retain, nonatomic) NSDate *lastCached;
@property (nonatomic) unsigned long long cachedPlatform;

+ (id)sharedManager;
+ (BOOL)_isEnrolledInBetaProgram;

- (void).cxx_destruct;
- (void)queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)isDeviceEnrolledInBetaProgram:(id)a0 completion:(id /* block */)a1;
- (void)unenrollDevice:(id)a0 completion:(id /* block */)a1;
- (void)_resetAssetAudience;
- (BOOL)_isEnrolledInBetaProgram;
- (id)verifyURLForCatalog:(id)a0;
- (id)membershipURL;
- (id)membershipURLForPlatforms:(unsigned long long)a0;
- (id)serverURLWithPath:(id)a0 arguments:(id)a1;
- (BOOL)isCacheValidForPlatforms:(unsigned long long)a0;
- (void)_queryProgramsForSystemAccountsWithPlatforms:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)savePrograms:(id)a0 forPlatforms:(unsigned long long)a1;
- (id)saveResponse:(id)a0 platforms:(unsigned long long)a1;
- (id)availableBetaProgramsForPlatforms:(unsigned long long)a0;
- (void)enrollDevice:(id)a0 inBetaProgram:(id)a1 completion:(id /* block */)a2;
- (void)_enrollUsingSeedingConfiguration:(id)a0;
- (void)verifyCatalog:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_unenrollFromBetaProgram;
- (void)_setMemberEnrolled:(BOOL)a0;
- (void)_synchronizeCFPreferences;
- (id)_assetServerURLString;
- (void)_setAssetServerURLString:(id)a0;
- (id)_brainServerURLString;
- (void)_setBrainServerURLString:(id)a0;
- (void)_setAssetAudienceString:(id)a0;

@end
