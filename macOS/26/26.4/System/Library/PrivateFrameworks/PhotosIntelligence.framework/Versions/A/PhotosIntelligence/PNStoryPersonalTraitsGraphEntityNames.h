@class NSDictionary;

@interface PNStoryPersonalTraitsGraphEntityNames : NSObject {
    NSDictionary *_personalTraitEntityConfiguration;
}

+ (id)_loadPersonalTraitEntityConfiguration;

- (void).cxx_destruct;
- (id)init;
- (long long)configurationVersion;
- (id)sceneNames;
- (id)dominantRequiredSceneNames;
- (id)meaningNames;

@end
