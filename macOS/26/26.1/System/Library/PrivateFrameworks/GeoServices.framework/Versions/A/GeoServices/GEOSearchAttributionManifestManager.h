@protocol GEOSearchAttributionServerProxy;

@interface GEOSearchAttributionManifestManager : NSObject

@property (readonly, nonatomic) id<GEOSearchAttributionServerProxy> serverProxy;

+ (void)useLocalProxy;
+ (id)sharedManager;
+ (void)setUseLocalProxy:(BOOL)a0;
+ (void)useRemoteProxy;
+ (void)useProxy:(Class)a0;

- (void).cxx_destruct;
- (id)init;
- (void)loadAttributionInfoForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
