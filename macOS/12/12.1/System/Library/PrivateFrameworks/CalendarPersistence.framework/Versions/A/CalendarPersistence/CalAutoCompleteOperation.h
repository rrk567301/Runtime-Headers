@class NSString, NSArray, NSSet, CalDAVAutocompleteOperation, ACAccount, CNAutocompleteStore, NSMutableArray, NSObject, NSCache;
@protocol OS_dispatch_queue, CalAutoCompleteDelegate, CNCancelable;

@interface CalAutoCompleteOperation : NSObject <CNAutocompleteFetchDelegate, CalDAVAutocompleOperationDelegate>

@property BOOL doRooms;
@property BOOL doPeople;
@property BOOL doSuggestions;
@property BOOL doResources;
@property BOOL doGroups;
@property BOOL doRecents;
@property BOOL excludeLocal;
@property (copy) NSString *prefix;
@property (retain) NSString *lastSearchedSourceID;
@property (retain) NSSet *addressesToIgnore;
@property (retain) NSCache *participantAddressCache;
@property (retain) NSMutableArray *contactResults;
@property (retain) id<CNCancelable> autocompletionSearchRequest;
@property BOOL autocompleteRunning;
@property (retain) CNAutocompleteStore *autocompleteStore;
@property (retain) ACAccount *account;
@property (retain) CalDAVAutocompleteOperation *cdQuerySession;
@property (copy) id /* block */ calDAVCompletionHandler;
@property (retain) NSObject<OS_dispatch_queue> *resultsAggregationQueue;
@property (retain) NSArray *ignoredParticipants;
@property (retain) NSArray *ignoredAddresses;
@property (weak) id<CalAutoCompleteDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (id)initWithDelegate:(id)a0;
- (id)lastSearchString;
- (void)cancelSearch;
- (id)searchFor:(id)a0 onAccountID:(id)a1 findPeople:(BOOL)a2 groups:(BOOL)a3 resources:(BOOL)a4 rooms:(BOOL)a5 recents:(BOOL)a6 server:(BOOL)a7 suggestions:(BOOL)a8 excludeLocal:(BOOL)a9 ignoredParticipants:(id)a10 ignoredAddresses:(id)a11 context:(id)a12;
- (void)clearLastResults;
- (void)stopTimeoutCounterForCalDAV;
- (id)allResults;
- (void)updateIgnoredParticipants:(id)a0;
- (void)updateIgnoredAddresses:(id)a0;
- (void)queryTimedOut;
- (void)endCalDAVQuery;
- (id)cnResults;
- (BOOL)_isValidAutocompleteResult:(id)a0;
- (id)removeAddresses:(id)a0 fromResults:(id)a1;
- (void)startTimeoutCounterForCalDAV;
- (id)convertWrappersIntoAutocompleteResults:(id)a0;
- (BOOL)doCalDAVSearchWithAutocompleteBlock:(id /* block */)a0;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)a0;
- (void)autocompleteFetchDidEndNetworkActivity:(id)a0;
- (BOOL)autocompleteFetch:(id)a0 shouldExpectSupplementalResultsForRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)startedQuery:(id)a0;
- (void)finishedQuery:(id)a0;
- (id)searchForRoomsMatchingString:(id)a0 onSource:(id)a1 participantsToIgnore:(id)a2;
- (id)searchForPeopleMatchingString:(id)a0 withContext:(id)a1 onSource:(id)a2 participantsToIgnore:(id)a3;
- (id)searchForPeopleMatchingString:(id)a0 withContext:(id)a1 onSource:(id)a2 addressesToIgnore:(id)a3;
- (id)_emailsToResultsFromResults:(id)a0;
- (id)resultsRemovingDuplicateDisplayNames;
- (id)resultsAsPrefixStringMatchesWithStringToWrapperDictionary:(id)a0;
- (id)removeIgnoredAddressesFromResults:(id)a0;

@end
