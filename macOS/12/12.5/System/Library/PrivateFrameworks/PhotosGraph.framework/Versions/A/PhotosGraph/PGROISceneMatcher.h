@class NSMutableDictionary;

@interface PGROISceneMatcher : NSObject {
    NSMutableDictionary *_confidenceThresholdByWhitelistedSceneIdentifierByROILabel;
    NSMutableDictionary *_confidenceThresholdByBlockedSceneIdentifierByROILabel;
}

+ (id)beachSceneNames;
+ (id)mountainSceneNames;
+ (id)natureSceneNames;
+ (id)waterSceneNames;
+ (id)urbanSceneNames;
+ (id)nonNatureSceneNames;
+ (id)nonWaterSceneNames;
+ (id)whitelistedSceneNamesByROILabel;
+ (id)confidenceThresholdBySceneIdentifierWithSceneNames:(id)a0 blocked:(BOOL)a1;
+ (id)blockedSceneNamesByROILabel;
+ (id)sharedROISceneMatcher;

- (void).cxx_destruct;
- (id)confidenceThresholdByWhitelistedSceneIdentifierForROILabel:(id)a0;
- (id)confidenceThresholdByBlockedSceneIdentifierForROILabel:(id)a0;

@end
