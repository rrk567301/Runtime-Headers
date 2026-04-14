@class MCProgressEntry, NSArray, NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface MCProgressManager : NSObject <EFLoggable, MCDiagnosticsLoggable, MCProgressEntryDelegate> {
    NSMutableDictionary *_entriesBySlice;
    NSMutableArray *_orderedEntries;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) MCProgressEntry *activeEntry;
@property (readonly, copy, nonatomic) NSArray *orderedEntries;
@property (copy, nonatomic) NSArray *trackedAccountNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *diagnosticsCategory;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)gatherDiagnostics;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)_removeEntry:(id)a0;
- (void)dealloc;
- (void)_addEntry:(id)a0;
- (void)addProgress:(id)a0 forSlice:(long long)a1;
- (id /* block */)_entryComparator;
- (void)_keepAliveMethodForObject:(id)a0;
- (void)_refreshActiveEntry;
- (unsigned long long)countOfOrderedEntries;
- (void)insertObject:(id)a0 inOrderedEntriesAtIndex:(unsigned long long)a1;
- (id)objectInOrderedEntriesAtIndex:(unsigned long long)a0;
- (void)progressEntryDidFinish:(id)a0;
- (void)removeObjectFromOrderedEntriesAtIndex:(unsigned long long)a0;

@end
