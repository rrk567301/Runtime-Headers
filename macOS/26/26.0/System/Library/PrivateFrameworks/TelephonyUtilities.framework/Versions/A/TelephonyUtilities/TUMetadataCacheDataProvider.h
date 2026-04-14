@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TUMetadataCacheDataProviderDelegate;

@interface TUMetadataCacheDataProvider : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *providerCache;
@property (readonly, nonatomic) NSMutableDictionary *providerDictCache;
@property (weak, nonatomic) id<TUMetadataCacheDataProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)classIdentifier;

- (id)initWithQueue:(id)a0;
- (void)refresh;
- (void)_invalidateCache;
- (id)metadataForDestinationID:(id)a0;
- (id)init;
- (id)description;
- (void)invalidateCache;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (void).cxx_destruct;
- (id)metadataDictForDestinationID:(id)a0;
- (void)setMetadataDict:(id)a0 forDestinationID:(id)a1;
- (void)setObject:(id)a0 forDestinationID:(id)a1;

@end
