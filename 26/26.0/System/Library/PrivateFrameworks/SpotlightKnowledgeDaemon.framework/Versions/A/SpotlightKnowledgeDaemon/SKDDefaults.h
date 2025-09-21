@class NSArray;
@protocol SKDFeatureFlagsProviding, SKDDefaultsProviding;

@interface SKDDefaults : NSObject {
    id<SKDDefaultsProviding> _defaultsProvider;
    id<SKDFeatureFlagsProviding> _featureFlagsProvider;
}

@property (readonly, nonatomic) id<SKDDefaultsProviding> defaultsProvider;
@property (readonly, nonatomic) id<SKDFeatureFlagsProviding> featureFlagsProvider;
@property (readonly, nonatomic) BOOL pipelineEnabled;
@property (readonly, nonatomic) BOOL pipelineDebugEnabled;
@property (readonly, nonatomic) BOOL pipelineKeyphrasesEnabled;
@property (readonly, nonatomic) BOOL anyPipelineEnabled;
@property (readonly, nonatomic) NSArray *excludeBundles;

+ (id)sharedDefaults;

- (void)setDefaultsProvider:(id)a0;
- (void)setFeatureFlagsProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)enabledForPipeline:(id)a0;
- (id)versionForPipeline:(id)a0;

@end
