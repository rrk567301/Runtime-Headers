@class NSObject, NSDate, NSArray, NSURL, NSLocale, QPDataDetectorsParser;
@protocol OS_dispatch_queue;

@interface QPQueryParserManager : NSObject {
    void *_parser;
    QPDataDetectorsParser *_dateParser;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _modelIsLoaded;
    NSLocale *_currentLocale;
    NSDate *_originalDate;
    NSLocale *_originalLocale;
    NSArray *_originalPreferredLocales;
    NSURL *_originalCustomResourceDirectory;
}

@property (class, readonly) QPQueryParserManager *omniSearchManager;
@property (class, readonly) QPQueryParserManager *defaultManager;

+ (id)availableLanguages;
+ (id)remindersParserManager;
+ (id)spotlightManager;
+ (id)memoryCreationManager;
+ (id)notesManager;
+ (id)photosParserManager;
+ (id)visualGenerationManager;

- (void)preheat;
- (void)preheat;
- (void)setOptions:(id)a0;
- (void)cooldown;
- (id)initWithOptions:(id)a0;
- (BOOL)available;
- (void)updateWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)locale;
- (void)reset;
- (void)dealloc;
- (void)enumerateParseResultsForString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (id)classificationForString:(id)a0 options:(id)a1 error:(id *)a2;
- (void)enumerateCerberusResultsForString:(id)a0 spQUParse:(id)a1 options:(id)a2 withBlock:(id /* block */)a3;
- (void)enumerateSpotlightResultsForString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (id)getQPLLMParseForString:(id)a0 llmQUResponse:(id)a1 options:(id)a2 error:(id *)a3;
- (id)classifyQuery:(id)a0 options:(id)a1 error:(id *)a2;
- (id)dateFromParseAttributes:(id)a0;
- (id)embeddingForString:(id)a0 extendedContextLength:(BOOL)a1;
- (void)enumerateDateParseResultsForString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateLLMResultsForString:(id)a0 llmQUResponse:(id)a1 options:(id)a2 withBlock:(id /* block */)a3;
- (void)enumerateParseResultsForStartDateString:(id)a0 startDateContext:(id)a1 endDateString:(id)a2 endDateContext:(id)a3 options:(id)a4 withBlock:(id /* block */)a5;
- (id)formatClassificationScores:(id)a0;
- (id)getLLMParseForString:(id)a0 options:(id)a1 error:(id *)a2;
- (id)getOfflineQPLLMParseForString:(id)a0 options:(id)a1 error:(id *)a2;
- (id)labelNameForQCLabel:(int)a0;
- (id)resourcesInfo;

@end
