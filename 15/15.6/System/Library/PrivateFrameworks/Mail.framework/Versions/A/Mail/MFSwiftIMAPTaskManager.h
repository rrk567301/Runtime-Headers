@class NSString;

@interface MFSwiftIMAPTaskManager : NSObject <IMAPTaskManager> {
    void /* unknown type, empty encoding */ workloopKey;
    void /* unknown type, empty encoding */ workloop;
    void /* unknown type, empty encoding */ callbackQueue;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ makeEngineAndAdaptor;
    void /* unknown type, empty encoding */ _engineAndAdaptor;
    void /* unknown type, empty encoding */ bodyFetchContext;
}

@property (nonatomic, copy) NSString *defaultIdleMailboxName;
@property (nonatomic, copy) NSString *secondaryIdleMailboxName;
@property (nonatomic, readonly) char connected;
@property (nonatomic) unsigned int firstNewInboxUID;
@property (nonatomic, readonly) char hasActivity;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isConnected;
- (void)terminate:(id /* block */)a0;
- (id)initWithAccount:(id)a0;
- (char)connectToServer;
- (void)accountDidChange:(id)a0;
- (void)closeAllConnections;
- (char)deleteMailbox:(id)a0;
- (void)test_tearDown;
- (void)addLocalAction:(id)a0;
- (void)expungeMailbox:(id)a0;
- (id)fetchNamespaces;
- (void)beginPerformingLocalActionsIfNeeded;
- (void)cancelMailboxSyncTaskForMailboxName:(id)a0;
- (void)checkForNewLocalActions;
- (char)createMailbox:(id)a0;
- (id)downloadBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 allowPartial:(char)a2 error:(id *)a3;
- (id)downloadHeaderDataForMessage:(id)a0;
- (char)expungeMailbox:(id)a0 ifSelected:(char)a1;
- (void)expungeUIDs:(id)a0 inMailbox:(id)a1;
- (void)fetchQuotaForRootName:(id)a0;
- (void)fetchQuotaRootNamesForMailboxes:(id)a0;
- (id)fetchSeparatorChar;
- (char)fetchTotalSizeAndMessageCountForMailbox:(id)a0;
- (void)goOffline;
- (char)listingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (void)localMailboxesDidChange;
- (char)mailboxIsInSync:(id)a0;
- (char)mailboxIsSyncing:(id)a0;
- (id)newBodyFetchContext;
- (void)removeInvalidConnections;
- (char)renameMailbox:(id)a0 toMailbox:(id)a1;
- (void)resetMaximumConnectionCount;
- (void)resyncMailboxWithName:(id)a0;
- (char)subscribeMailbox:(id)a0;
- (char)subscribedListingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (char)supportsQuotas;
- (void)syncAccountForceFullSync:(char)a0 userInitiated:(char)a1;
- (void)unselectMailboxConnectionsWithName:(id)a0 expunge:(char)a1;
- (char)unsubscribeMailbox:(id)a0;
- (void)updateGlobalListOfUserSelectedMailboxes:(id)a0;

@end
