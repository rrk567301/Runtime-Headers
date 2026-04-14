@class NSDictionary;

@interface PNStoryPersonalTraitsGraphEntityNames : NSObject {
    NSDictionary *_personalTraitEntityConfiguration;
}

+ (id)_loadPersonalTraitEntityConfiguration;

- (long long)configurationVersion;
- (void).cxx_destruct;
- (id)init;
- (id)sceneNames;
- (id)dominantRequiredSceneNames;
- (id)meaningNames;

@end
