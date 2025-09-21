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
@property (readonly, nonatomic) char featureAvailable;
@property (readonly, nonatomic) char featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generationOptionNameFromSingleOption:(unsigned long long)a0;
+ (void)sendWallpaperGenerationCompletedBiomeEvent:(id)a0;

- (void).cxx_destruct;
- (int)priority;
- (id)baseSuggestionOptionsWithSubtypes:(id)a0;
- (char)currentPlatformIsSupported;
- (id)generateSuggestionsWithContentMode:(short)a0 suggestionController:(id)a1 progressReporter:(id)a2 shouldReload:(char *)a3;
- (id)generateSuggestionsWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)incrementalKey;
- (id)initWithGenerationOptions:(unsigned long long)a0;
- (char)isGraphDependentSubtype:(unsigned short)a0;
- (char)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (char)shouldRunWithGraphManager:(id)a0;
- (id)subtypePredicateWithContentMode:(short)a0;
- (id)suggestionOptionsWithContentMode:(short)a0 isGraphReady:(char)a1 loggingConnection:(id)a2;
- (unsigned char)suggestionProfileForContentMode:(short)a0;
- (char)suggestionsExistInPhotoLibrary:(id)a0 subtypePredicate:(id)a1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(char)a0;

@end
