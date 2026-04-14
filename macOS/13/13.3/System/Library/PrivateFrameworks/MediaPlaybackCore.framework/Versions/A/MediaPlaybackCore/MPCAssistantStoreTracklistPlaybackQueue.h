@class NSArray, MPIdentifierSet;

@interface MPCAssistantStoreTracklistPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSArray *storeItemIDs;
@property (nonatomic) long long shuffleType;
@property (readonly, nonatomic) MPIdentifierSet *collectionIdentifierSet;

+ (id)storeTracklistQueueWithContextID:(id)a0 storeItemIDs:(id)a1 collectionIdentifierSet:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)getPlaybackQueueWithDestination:(id)a0 completion:(id /* block */)a1;
- (id)initWithContextID:(id)a0 storeItemIDs:(id)a1 collectionIdentifierSet:(id)a2;

@end
