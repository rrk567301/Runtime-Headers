@class NSMutableArray, NSMutableDictionary, CSEventListener, CSThresholdedTrigger, NSObject;
@protocol OS_dispatch_queue, CSEventListenerManagerSignposter;

@interface CSEventListenerManager : NSObject {
    BOOL _throttled;
    BOOL _isAssertionsAllowed;
    BOOL _isManagedEventListener;
    int _indexType;
    int _folderFd;
    unsigned int _homePathHash;
    NSObject<OS_dispatch_queue> *_queue;
    CSEventListener *_eventListener;
    CSThresholdedTrigger *_thresholdTrigger;
    long long _totalJournalSize;
    NSMutableDictionary *_journalMap;
    NSMutableArray *_journalQueue;
    id<CSEventListenerManagerSignposter> _signposter;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _journalQueueLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _journalMapLock;
}

- (void)startUp;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)dropAssertions:(id)a0;
- (void)processJournals;
- (void)takeAssertions:(id)a0;
- (void)_cleanupJournalsWithEvent:(id)a0;
- (void)_loadJournals;
- (void)_processJournalsWithProcessedJournalsCount:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)deleteFirstJournal:(id)a0;
- (id)initWithIndexType:(int)a0 indexPath:(id)a1 eventListener:(id)a2 isManagedEventListener:(BOOL)a3 homePathHash:(unsigned int)a4;
- (void)purgeJournalsProactive;
- (void)registerJournalWithIno:(id)a0 journalBasePath:(id)a1 journalIno:(unsigned long long)a2 dev:(int)a3 journalNumber:(unsigned long long)a4 journalCookie:(id)a5;
- (void)runThrottledTaskAsync;
- (void)sortJournals;

@end
