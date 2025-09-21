@class NSString, NSArray, IMAPConnection, IMAPMailbox, IMAPNetworkTaskHandler;

@interface IMAPServerInterface : NSObject <ECIMAPServerInterface>

@property (readonly, nonatomic) IMAPConnection *connection;
@property (retain, nonatomic) NSString *mailboxName;
@property (readonly) IMAPNetworkTaskHandler *networkTaskHandler;
@property (readonly) IMAPMailbox *selectedIMAPMailbox;
@property (readonly, nonatomic) char hasValidConnection;
@property (readonly, copy, nonatomic) NSString *separatorChar;
@property (readonly, copy) NSArray *capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)check:(id *)a0;
- (char)expunge;
- (void)unselect;
- (char)supportsCapability:(unsigned long long)a0;
- (void)logout;
- (char)storeGmailLabels:(id)a0 state:(char)a1 forUIDs:(id)a2;
- (char)appendData:(id)a0 toMailboxNamed:(id)a1 flags:(id)a2 dateReceived:(id)a3 appendInfo:(id *)a4 error:(id *)a5;
- (char)copyUIDs:(id)a0 toMailboxNamed:(id)a1 copyInfo:(id *)a2 error:(id *)a3;
- (char)expungeUIDs:(id)a0;
- (char)moveUIDs:(id)a0 toMailboxNamed:(id)a1 copyInfo:(id *)a2 error:(id *)a3;
- (char)storeFlagChange:(id)a0 forUIDs:(id)a1;
- (char)deleteMailbox:(id)a0;
- (id)initWithConnection:(id)a0 mailboxName:(id)a1;
- (char)createMailbox:(id)a0;
- (void)fetchQuotaRootNamesForMailboxes:(id)a0;
- (char)listingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (char)renameMailbox:(id)a0 toMailbox:(id)a1;
- (char)subscribeMailbox:(id)a0;
- (char)subscribedListingForMailbox:(id)a0 options:(long long)a1 listingInfo:(id)a2;
- (char)unsubscribeMailbox:(id)a0;
- (char)selectMailboxIfNeededWithError:(id *)a0;
- (char)_batchUIDs:(id)a0 block:(id /* block */)a1;
- (char)_setError:(id *)a0 fromCommand:(id)a1;
- (void)_setErrorFromCommand:(id)a0 overwriteExistingError:(char)a1;
- (id)_sourceUIDsToDestinationUIDsFromMessageInfo:(id)a0;
- (char)_transferUIDs:(id)a0 toMailboxNamed:(id)a1 isMove:(char)a2 copyInfo:(id *)a3 error:(id *)a4;
- (char)capabilityIsEnabled:(unsigned long long)a0;
- (void)closeAndLogout;
- (char)executeClientCommand:(id)a0;
- (void)fetchTotalSizeAndMessageCount;
- (char)getQuotaForRootName:(id)a0;
- (id)initWithNetworkTaskHandler:(id)a0 mailboxName:(id)a1;
- (id)mailboxNameIfSelected:(char)a0;
- (char)selectMailbox:(id)a0 error:(id *)a1;
- (void)startIdle;

@end
