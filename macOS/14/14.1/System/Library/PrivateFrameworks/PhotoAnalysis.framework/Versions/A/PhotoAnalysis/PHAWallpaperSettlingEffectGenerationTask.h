@class NSDictionary, NSString;

@interface PHAWallpaperSettlingEffectGenerationTask : NSObject <PHASuggestionGenerationTask>

@property (retain, nonatomic) NSDictionary *suggestionOptionsDictionary;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL didProduceContent;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (id)generateSuggestionsWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
