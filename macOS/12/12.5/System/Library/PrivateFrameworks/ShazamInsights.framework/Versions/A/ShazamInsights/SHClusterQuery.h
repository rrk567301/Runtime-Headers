@class NSURL;

@interface SHClusterQuery : NSObject

@property (readonly) NSURL *sourceURL;
@property (readonly) NSURL *destinationURL;
@property (readonly) long long type;

+ (id)tracksCluster;
+ (id)artistsCluster;
+ (id)clusterForType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 sourceURL:(id)a1 destinationURL:(id)a2;
- (void)controllerForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)filterMediaItemQueryCollection:(id)a0 bySeedCollection:(id)a1 completionHandler:(id /* block */)a2;
- (void)mediaItemsWithHighCohesionToValue:(id)a0 forProperty:(id)a1 completionHandler:(id /* block */)a2;
- (void)mediaItemsMatchingValuesInCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)statusWithCompletionHandler:(id /* block */)a0;

@end
