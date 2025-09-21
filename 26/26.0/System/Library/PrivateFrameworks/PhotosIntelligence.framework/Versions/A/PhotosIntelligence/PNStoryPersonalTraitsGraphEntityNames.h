@class NSDictionary;

@interface PNStoryPersonalTraitsGraphEntityNames : NSObject {
    NSDictionary *_personalTraitEntityConfiguration;
}

+ (id)_loadPersonalTraitEntityConfiguration;

- (id)init;
- (long long)configurationVersion;
- (void).cxx_destruct;
- (id)sceneNames;
- (id)dominantRequiredSceneNames;
- (id)meaningNames;

@end
