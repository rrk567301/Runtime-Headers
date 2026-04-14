@class NSString, CSEventListener;

@interface CSJournalProcessor : NSObject {
    BOOL _complete;
    BOOL _managedJournal;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _parentFD;
    int _indexType;
    int _dev;
    int _journal_fd;
    int _journal_fd_retain_count;
    int _toc_fd;
    int _toc_fd_retain_count;
    int _processed_fd;
    int _processed_fd_retain_count;
    int _err;
    unsigned int _homePathHash;
    unsigned long long _journalNumber;
    unsigned long long _journalIno;
    const char *_journal_orig_name;
    const char *_journal_cookie;
    long long _journal_file_size;
    const char *_toc_name;
    const char *_processed_name;
    long long _toc_complete_size;
    long long _toc_processed;
    long long _toc_file_size;
    long long _toc_retry_counter;
    CSEventListener *_eventListener;
    id /* block */ _itemHandler;
}

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) const char *journal_name;
@property (readonly, nonatomic) BOOL processingDone;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL loaded;
@property (nonatomic) BOOL warmedup;
@property (nonatomic) int warmupFailCtr;
@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (void)warmup;
- (id)init;
- (BOOL)isComplete;
- (id)description;
- (void)cooldown;
- (void).cxx_destruct;
- (void)deleteFiles;
- (int)retainJournalFd;
- (void)_processOffsetAtOffset:(long long)a0 completion:(id /* block */)a1;
- (id)initFromSpotlightDaemonWithParentFd:(int)a0 eventListener:(id)a1 key:(id)a2 msg:(id)a3 spotlightBasePath:(const char *)a4;
- (id)initWithParentFd:(int)a0 eventListener:(id)a1 indexType:(int)a2 journalNumber:(unsigned long long)a3 journalCookie:(id)a4 name:(id)a5;
- (id)initWithParentFd:(int)a0 eventListener:(id)a1 key:(id)a2 indexType:(int)a3 journalIno:(unsigned long long)a4 dev:(int)a5 journalNumber:(unsigned long long)a6 journalCookie:(const char *)a7 journalName:(const char *)a8 journalBasePath:(const char *)a9;
- (id)initWithParentFd:(int)a0 eventListener:(id)a1 key:(id)a2 msg:(id)a3 journalBasePath:(const char *)a4;
- (BOOL)isProtectedIndex;
- (int)linkFileAtPath:(char *)a0 parentFd:(int)a1 fileName:(const char *)a2;
- (void)markComplete:(long long)a0 processingDone:(BOOL)a1;
- (BOOL)processNext:(id)a0 completion:(id /* block */)a1;
- (void)releaseJournalFd;
- (void)releaseProcessedFd;
- (void)releaseTocFd;
- (void)retainJournalUsingFd:(int)a0;
- (int)retainProcessedFd;
- (int)retainTocFd;
- (BOOL)setupFromSpotlightDaemonJournalWithParentFd:(int)a0 spotlightBasePath:(const char *)a1;
- (BOOL)setupFromTopLevelJournalWithParentFd:(int)a0 journalBasePath:(const char *)a1;
- (BOOL)setupWithParentFd:(int)a0 name:(id)a1;
- (BOOL)writeUpdaterProgressToStoreWithIndexType:(int)a0 UUID:(const char *)a1 serialNumber:(unsigned long long)a2 error:(id)a3;

@end
