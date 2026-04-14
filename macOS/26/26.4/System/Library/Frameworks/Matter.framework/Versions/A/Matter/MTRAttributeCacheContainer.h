@class MTRClusterStateCacheContainer;

@interface MTRAttributeCacheContainer : NSObject

@property (readonly, nonatomic) MTRClusterStateCacheContainer *realContainer;

- (void).cxx_destruct;
- (id)init;
- (void)readAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 clientQueue:(id)a3 completion:(id /* block */)a4;

@end
