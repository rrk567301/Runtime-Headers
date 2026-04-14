@protocol GEOSearchAttributionServerProxy;

@interface GEOSearchAttributionManifestManager : NSObject

@property (readonly, nonatomic) id<GEOSearchAttributionServerProxy> serverProxy;

+ (void)useProxy:(Class)a0;
+ (void)useLocalProxy;
+ (id)sharedManager;
+ (void)useRemoteProxy;
+ (void)setUseLocalProxy:(BOOL)a0;

- (void).cxx_destruct;
- (id)init;
- (void)loadAttributionInfoForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
