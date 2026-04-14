@class NSDictionary, NSString;

@interface PHAWallpaperSuggestionGenerationWeeklyTask : NSObject <PHASuggestionGenerationTask> {
    unsigned long long _generationOptions;
    unsigned long long _generatedContent;
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

+ (id)generationOptionNameFromSingleOption:(unsigned long long)a0;
+ (void)sendWallpaperGenerationCompletedBiomeEvent:(id)a0;

- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (int)priority;
- (BOOL)currentPlatformIsSupported;
- (void)timeoutFatal:(BOOL)a0;
- (void).cxx_destruct;
- (id)incrementalKey;
- (id)generateSuggestionsWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)initWithGenerationOptions:(unsigned long long)a0;

@end
