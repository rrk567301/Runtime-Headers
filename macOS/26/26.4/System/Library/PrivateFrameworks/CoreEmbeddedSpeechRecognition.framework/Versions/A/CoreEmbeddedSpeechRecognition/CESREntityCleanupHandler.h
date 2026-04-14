@class EAREntityCleanup, CESRSpeechProfileMetrics, NSMutableSet;

@interface CESREntityCleanupHandler : NSObject {
    EAREntityCleanup *_entityCleaner;
    CESRSpeechProfileMetrics *_metrics;
    NSMutableSet *_codepathIds;
}

+ (BOOL)_isNormalizedEqual:(id)a0 string2:(id)a1;
+ (id)_normalize:(id)a0;
+ (BOOL)isEntityExcludedForBundleId:(id)a0 type:(id)a1 exclusionDictionary:(id)a2;

- (void).cxx_destruct;
- (id)applyEntityCleanup:(id)a0 enableEntityCleanup:(BOOL)a1 enableEmojiCleanup:(BOOL)a2 enableSpecialCharacterCleanup:(BOOL)a3 specialCharactersToRemove:(id)a4 customRegex:(id)a5;
- (id)applyEntityCleanupToAppEntity:(id)a0 bundleId:(id)a1 entityType:(id)a2 entityCleanupConfig:(id)a3;
- (id)applyEntityCleanupToNonAppEntity:(id)a0 entityCleanupConfig:(id)a1;
- (id)initWithSpeechProfileMetrics:(id)a0 codepathIds:(id)a1;

@end
