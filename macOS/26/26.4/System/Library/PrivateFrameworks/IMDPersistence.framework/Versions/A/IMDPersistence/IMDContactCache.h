@class NSString, IMAcceptedContactsChangeNotifier, NSData, NSObject, NSCache;
@protocol IMDIndexingQueries, OS_dispatch_queue, IMDCNContactStore;

@interface IMDContactCache : NSObject <CNChangeHistoryEventVisitor>

@property (readonly, nonatomic) id<IMDCNContactStore> contactStore;
@property (readonly, nonatomic) id<IMDIndexingQueries> indexingProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ fullChangeBlock;
@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSCache *fullNameCache;
@property (retain, nonatomic) IMAcceptedContactsChangeNotifier *acceptedContactsChangeNotifier;
@property (readonly, nonatomic) NSData *currentHistoryToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)visitUpdateContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)contactStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)fullNameForContact:(id)a0;
- (void)__cacheAndReindexAcceptedContactUpdates:(id)a0 deletions:(id)a1;
- (void)__cacheContact:(id)a0 forKeys:(id)a1;
- (void)__cacheContact:(id)a0 forKeys:(id)a1 overwrite:(BOOL)a2;
- (id)__cachedContactsForKeys:(id)a0;
- (id)__cachedContactsForKeys:(id)a0 omittingPlaceholders:(BOOL)a1 requiredKeys:(id)a2;
- (void)__contactDidChange:(id)a0;
- (void)__contactStoreDidChange;
- (void)__contactWasAdded:(id)a0;
- (void)__contactWasDeletedWithIdentifier:(id)a0;
- (id)__contactsWithAddresses:(id)a0 omittingPlaceholders:(BOOL)a1 withAdditionalPropertyKeys:(id)a2;
- (id)__fullNameForContact:(id)a0;
- (id)__handlesMatchingContactIdentifier:(id)a0;
- (void)__removeCachedContactForKey:(id)a0;
- (void)__removeCachedContactsForKeys:(id)a0;
- (void)__resetCache;
- (void)__updateCacheForAliases:(id)a0 withResultsFromHistoryToken:(id)a1;
- (void)_reindexHandles:(id)a0 reason:(long long)a1;
- (void)cacheAndReindexAcceptedContactUpdates:(id)a0 deletions:(id)a1;
- (void)cacheContactsFromFetchResults:(id)a0 forAliases:(id)a1 currentHistoryToken:(id)a2;
- (id)contactsWithAddresses:(id)a0;
- (id)contactsWithAddresses:(id)a0 omittingPlaceholders:(BOOL)a1 withAdditionalPropertyKeys:(id)a2;
- (id)contactsWithAddresses:(id)a0 withAdditionalPropertyKeys:(id)a1;
- (id)initWithContactStore:(id)a0 indexingProvider:(id)a1;

@end
