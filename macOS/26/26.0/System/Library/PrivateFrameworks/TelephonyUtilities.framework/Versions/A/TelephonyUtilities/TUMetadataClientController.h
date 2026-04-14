@class TUMetadataCache;

@interface TUMetadataClientController : NSObject

@property (class, readonly, nonatomic) TUMetadataClientController *sharedInstance;

@property (retain, nonatomic) TUMetadataCache *metadataCache;

- (void)updateMetadataForDestinationID:(id)a0 completion:(id /* block */)a1;
- (void)updateMetadataForRecentCalls:(id)a0 completion:(id /* block */)a1;
- (id)directoryLabelForSearchItem:(id)a0;
- (void)updateMetadataForRecentCalls:(id)a0;
- (id)_metadataDestinationIdForSearchItem:(id)a0;
- (void)updateMetadataForDestinationID:(id)a0;
- (id)init;
- (id)suggestionForDestinationID:(id)a0;
- (id)suggestionForSearchItem:(id)a0;
- (void)updateMetadataForCall:(id)a0 completion:(id /* block */)a1;
- (void)updateMetadataForCall:(id)a0;
- (id)directoryLabelForDestinationID:(id)a0;
- (id)locationForSearchItem:(id)a0;
- (void).cxx_destruct;
- (id)locationForDestinationID:(id)a0;

@end
