@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject {
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneLabel;
}

+ (id)junkSceneNames;
+ (id)junkSceneNamesLegacy;
+ (id)babyChildTeenAdultAndPetSceneNames;
+ (id)babyAndPetSceneNames;
+ (id)babySceneNames;
+ (id)childTeenAndAdultSceneNames;
+ (id)interestingSceneNames;
+ (id)whiteboardSceneNames;
+ (id)sceneNamesBySceneLabel;
+ (id)confidenceThresholdTypeBySceneLabel;
+ (id)sharedSceneMatcher;
+ (id)sceneNamesWithSceneLabel:(id)a0;

- (void).cxx_destruct;
- (id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)a0;

@end
