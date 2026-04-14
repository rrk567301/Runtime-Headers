@class NSString, NSArray, IMAPConnection, IMAPMailbox, IMAPNetworkTaskHandler;

@interface IMAPServerInterface : NSObject <ECIMAPServerInterface>

@property (readonly, nonatomic) IMAPConnection *connection;
@property (retain, nonatomic) NSString *mailboxName;
@property (readonly) IMAPNetworkTaskHandler *networkTaskHandler;
@property (readonly) IMAPMailbox *selectedIMAPMailbox;
@property (readonly, nonatomic) BOOL hasValidConnection;
@property (readonly, copy, nonatomic) NSString *separatorChar;
@property (readonly, copy) NSArray *capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)check:(id *)a0;
- (void)unselect;
- (void)logout;
- (BOOL)storeGmailLabels:(id)a0 state:(BOOL)a1 forUIDs:(id)a2;
- (BOOL)storeFlagChange:(id)a0 forUIDs:(id)a1;
- (BOOL)moveUIDs:(id)a0 toMailboxNamed:(id)a1 copyInfo:(id *)a2 error:(id *)a3;
- (BOOL)copyUIDs:(id)a0 toMailboxNamed:(id)a1 copyInfo:(id *)a2 error:(id *)a3;
- (BOOL)expungeUIDs:(id)a0;
- (BOOL)appendData:(id)a0 toMailboxNamed:(id)a1 flags:(id)a2 dateReceived:(id)a3 appendInfo:(id *)a4 error:(id *)a5;
- (BOOL)expunge;
- (BOOL)deleteMailbox:(id)a0;
- (id)initWithConnection:(id)a0 mailboxName:(id)a1;
- (BOOL)listingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (BOOL)createMailbox:(id)a0;
- (BOOL)subscribedListingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (BOOL)subscribeMailbox:(id)a0;
- (BOOL)unsubscribeMailbox:(id)a0;
- (BOOL)renameMailbox:(id)a0 toMailbox:(id)a1;
- (void)fetchQuotaRootNamesForMailboxes:(id)a0;
- (BOOL)executeClientCommand:(id)a0;
- (id)mailboxNameIfSelected:(BOOL)a0;
- (BOOL)supportsCapability:(unsigned long long)a0;
- (BOOL)capabilityIsEnabled:(unsigned long long)a0;
- (void)startIdle;
- (id)initWithNetworkTaskHandler:(id)a0 mailboxName:(id)a1;
- (BOOL)selectMailboxIfNeededWithError:(id *)a0;
- (void)closeAndLogout;
- (BOOL)selectMailbox:(id)a0 error:(id *)a1;
- (void)_setErrorFromCommand:(id)a0 overwriteExistingError:(BOOL)a1;
- (BOOL)_setError:(id *)a0 fromCommand:(id)a1;
- (BOOL)_batchUIDs:(id)a0 block:(id /* block */)a1;
- (BOOL)_transferUIDs:(id)a0 toMailboxNamed:(id)a1 isMove:(BOOL)a2 copyInfo:(id *)a3 error:(id *)a4;
- (id)_sourceUIDsToDestinationUIDsFromMessageInfo:(id)a0;
- (id)searchUidRange:(struct { unsigned long long x0; unsigned long long x1; })a0 forTerms:(id)a1;
- (BOOL)getQuotaForRootName:(id)a0;
- (void)fetchTotalSizeAndMessageCount;
- (id)searchUidRange:(struct { unsigned long long x0; unsigned long long x1; })a0 forNewMessageIDs:(id)a1;
- (unsigned int)searchedUidNextForMessageNumber:(unsigned long long)a0;

@end
