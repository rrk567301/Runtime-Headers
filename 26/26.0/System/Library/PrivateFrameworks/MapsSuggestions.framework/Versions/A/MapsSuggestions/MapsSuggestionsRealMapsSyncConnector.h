@class NSArray, NSString;
@protocol MapsSuggestionsMapsSyncConnectorDelegate;

@interface MapsSuggestionsRealMapsSyncConnector : NSObject <MapsSync.MapsSyncStoreDelegate, MapsSuggestionsMapsSyncConnector> {
    id<MapsSuggestionsMapsSyncConnectorDelegate> _delegate;
}

@property (copy, nonatomic) NSArray *storeSubscriptionTypes;
@property (weak, nonatomic) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)MapsSyncReviewedPlace_fetchWithMuids:(id)a0;
- (BOOL)allContentOfType:(long long)a0 withPredicate:(id)a1 handler:(id /* block */)a2;
- (id)init;
- (void)storeDidChange:(id)a0;
- (BOOL)allContentOfType:(long long)a0 handler:(id /* block */)a1;
- (void)deleteObjects:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)saveNewReviewedPlaceWithMuid:(unsigned long long)a0 lastSuggestedReviewDate:(id)a1;

@end
