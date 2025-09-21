@class NSDictionary, NSString, NSObject;
@protocol OS_os_log;

@interface PHASuggestionGenerationTask : NSObject <PHASuggestionGenerationTask> {
    NSObject<OS_os_log> *_loggingConnection;
    char _fastPass;
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

- (id)init;
- (void).cxx_destruct;
- (int)priority;
- (id)initForFastPass;
- (char)currentPlatformIsSupported;
- (id)generateSuggestionsWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (char)generateWallpaperSuggestions;
- (id)incrementalKey;
- (char)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (char)shouldRunWithGraphManager:(id)a0;
- (unsigned char)suggestionProfileFromSuggestionType:(unsigned short)a0 subtype:(unsigned short)a1;
- (id)taskClassDependencies;
- (void)timeoutFatal:(char)a0;

@end
