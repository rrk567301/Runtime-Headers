@class CESRContextualEntityConfig, NSString, CESRAppEntityConfig, CESREntityCleanupConfig, CESRDirectDonationConfig;

@interface CESRSpeechProfileConfig : NSObject

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSString *trialNamespace;
@property (readonly, nonatomic) BOOL loadedFromTrial;
@property (readonly, nonatomic) CESRDirectDonationConfig *directDonationConfig;
@property (readonly, nonatomic) CESRAppEntityConfig *appEntityConfig;
@property (readonly, nonatomic) CESRContextualEntityConfig *contextualEntityConfig;
@property (readonly, nonatomic) CESREntityCleanupConfig *entityCleanupConfig;

+ (id)_defaultConfigFilePath;

- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_parseJsonObject:(id)a0;

@end
