@class SwiftVCDaemonXPCEventHandler, VCSpotlightSyncOperation, WFDebouncer, CSSearchableIndex, NSMutableSet, NSObject, NSString;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface VCSpotlightSyncService : NSObject <WFDatabaseObjectObserver, VCSpotlightSyncOperationDelegate>

@property (readonly, nonatomic) WFDebouncer *debouncer;
@property (readonly, nonatomic) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCSpotlightSyncOperation *syncOperation;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *queuedModified;
@property (retain, nonatomic) NSMutableSet *queuedInserted;
@property (retain, nonatomic) NSMutableSet *queuedRemoved;
@property (nonatomic) char isFetchingClientState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)sync;
- (void)requestSync;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1;
- (void)syncOperationFinishedWithRequestToRelaunch:(char)a0;
- (void)syncWithChangeset:(id)a0;

@end
