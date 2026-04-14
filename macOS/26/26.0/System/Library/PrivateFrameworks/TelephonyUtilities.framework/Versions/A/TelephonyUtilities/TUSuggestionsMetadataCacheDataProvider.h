@class NSObject;
@protocol OS_dispatch_semaphore, SGSuggestionsServiceContactsProtocol;

@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (class, readonly, nonatomic) id<SGSuggestionsServiceContactsProtocol> sharedService;

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *suggestionsServiceThrottleSemaphore;
@property (readonly, nonatomic) id suggestionsContactsObserver;

+ (void)suggestedNamesForDestinationID:(id)a0 onlySignificant:(BOOL)a1 withCompletion:(id /* block */)a2;
+ (id)suggestedNamesForDestinationID:(id)a0 onlySignificant:(BOOL)a1 error:(id *)a2;
+ (id)newestSuggestedContactForDestinationID:(id)a0;
+ (id)suggestedNamesForDestinationID:(id)a0 onlySignificant:(BOOL)a1 supportsInfoLookup:(BOOL)a2 error:(id *)a3;
+ (BOOL)canUseSiriSuggestions;
+ (BOOL)shouldQuerySupportsInfo;

- (id)init;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (void).cxx_destruct;

@end
