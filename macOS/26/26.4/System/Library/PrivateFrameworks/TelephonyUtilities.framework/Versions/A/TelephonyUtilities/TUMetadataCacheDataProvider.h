@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TUMetadataCacheDataProviderDelegate;

@interface TUMetadataCacheDataProvider : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *providerCache;
@property (readonly, nonatomic) NSMutableDictionary *providerDictCache;
@property (weak, nonatomic) id<TUMetadataCacheDataProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)classIdentifier;

- (void)invalidateCache;
- (void)refresh;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (id)description;
- (void)_invalidateCache;
- (id)metadataForDestinationID:(id)a0;
- (id)metadataDictForDestinationID:(id)a0;
- (void)setMetadataDict:(id)a0 forDestinationID:(id)a1;
- (void)setObject:(id)a0 forDestinationID:(id)a1;

@end
