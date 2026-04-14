@class NSDictionary, NSString;

@interface PHAWallpaperSettlingEffectGenerationTask : NSObject <PHASuggestionGenerationTask> {
    BOOL _generatedContent;
}

@property (copy, nonatomic) NSDictionary *suggestionOptionsDictionary;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) BOOL featureAvailable;
@property (readonly, nonatomic) BOOL featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timeoutFatal:(BOOL)a0;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (int)priority;
- (void).cxx_destruct;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)incrementalKey;
- (BOOL)currentPlatformIsSupported;
- (id)generateSuggestionsWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
