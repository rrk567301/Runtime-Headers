@class NSString, NSMutableDictionary, MapsSuggestionsQueue;

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject> {
    NSMutableDictionary *_suppressionEntries;
    NSString *_suppressionEntriesFilePath;
    MapsSuggestionsQueue *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (void)awaitQueue;
- (BOOL)saveSuppressedEntries;
- (BOOL)suppressEntry:(id)a0 forTime:(double)a1;
- (void)test_deleteSuppressedEntriesFile;
- (void).cxx_destruct;
- (BOOL)loadSuppressedEntries;
- (id)init;
- (id)initWithFilePath:(id)a0;
- (BOOL)isSuppressedEntry:(id)a0;
- (id)test_dateUntilSuppressedEntry:(id)a0;

@end
