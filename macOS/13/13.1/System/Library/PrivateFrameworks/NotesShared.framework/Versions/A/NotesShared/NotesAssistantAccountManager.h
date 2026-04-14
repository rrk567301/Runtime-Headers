@class NSString, NSMapTable;

@interface NotesAssistantAccountManager : NSObject <ICNFMCAccountProxyManager>

@property (class, readonly, nonatomic) NotesAssistantAccountManager *sharedInstance;

@property (retain, nonatomic) NSMapTable *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)accountProxyForAccount:(id)a0;
- (void)_reloadAccounts;
- (void)performFetchForAccount:(id)a0;
- (void)_performFetchForAccountsWithIdentifiers:(id)a0;

@end
