@class EKSource, NSString, NSSet, EKDirectorySearchOperation, CNAutocompleteStore, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, EKAutocompleterDelegate, CNCancelable;

@interface EKAutocompleter : NSObject <CNAutocompleteFetchDelegate>

@property (weak) id<EKAutocompleterDelegate> delegate;
@property (copy) NSString *prefix;
@property (retain) EKSource *source;
@property (retain) NSSet *addressesToIgnore;
@property (retain) NSMutableArray *contactResults;
@property (retain) id<CNCancelable> autocompletionSearchRequest;
@property char autocompleteRunning;
@property (retain) CNAutocompleteStore *autocompleteStore;
@property (retain) EKDirectorySearchOperation *directorySearchOperation;
@property (retain) NSObject<OS_dispatch_queue> *directorySearchQueue;
@property (retain) NSMutableArray *directorySearchResults;
@property (nonatomic) char findRooms;
@property (nonatomic) char findPeople;
@property (nonatomic) char findSuggestions;
@property (nonatomic) char findResources;
@property (nonatomic) char findGroups;
@property (nonatomic) char findRecents;
@property (nonatomic) char useACDirectorySearch;
@property (nonatomic) char excludeLocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (char)isRunning;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (char)autocompleteFetch:(id)a0 shouldExpectSupplementalResultsForRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)a0;
- (void)autocompleteFetchDidEndNetworkActivity:(id)a0;
- (void)autocompleteFetchDidFinish:(id)a0;
- (id)lastSearchString;
- (id)searchFor:(id)a0 onSource:(id)a1 withContext:(id)a2;
- (id)allResults;
- (id)autocompleteResultsFromDirectoryRecords:(id)a0 withType:(long long)a1;
- (void)cancelSearch;
- (void)clearLastResults;
- (id)cnResults;
- (char)directorySearchWithCompletion:(id /* block */)a0;
- (id)removeIgnoredAddressesFromResults:(id)a0;
- (void)setIgnoredAddresses:(id)a0;
- (void)setIgnoredAddresses:(id)a0 ignoredAddressesFromParticipants:(id)a1;

@end
