@class NSString, NSMutableArray;

@interface ICCDCSIReindexer : NSObject <ICReindexing>

@property (retain, nonatomic) NSMutableArray *registeredDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchableIndex;
+ (id)sharedReindexer;

- (void)reindexSearchableItemsWithObjectIDURIs:(id)a0 completionHandler:(id /* block */)a1;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerCoreDataCoreSpotlightDelegate:(id)a0;
- (void)stopIndexing;
- (void)_reindexSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterCoreDataCoreSpotlightDelegate:(id)a0;

@end
