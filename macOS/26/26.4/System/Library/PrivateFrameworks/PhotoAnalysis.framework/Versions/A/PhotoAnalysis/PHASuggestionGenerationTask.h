@class NSDictionary, NSString, NSObject;
@protocol OS_os_log;

@interface PHASuggestionGenerationTask : NSObject <PHASuggestionGenerationTask> {
    NSObject<OS_os_log> *_loggingConnection;
    BOOL _fastPass;
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

- (int)priority;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)timeoutFatal:(BOOL)a0;
- (id)init;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (id)incrementalKey;
- (id)initForFastPass;
- (id)generateSuggestionsWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)generateWallpaperSuggestions;
- (unsigned char)suggestionProfileFromSuggestionType:(unsigned short)a0 subtype:(unsigned short)a1;

@end
