@class geo_isolater, NSString, GEOActiveTileGroup, NSMutableDictionary, GEOXPCConnection, NSObject, GEOResourceManifestConfiguration;
@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {
    GEOXPCConnection *_xpcConnection;
    BOOL _hasOpenConnection;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _authTokenLock;
    NSString *_authToken;
    int _activeTileGroupChangedNotificationToken;
    geo_isolater *_zoomLevelIsolation;
    NSMutableDictionary *_maximumZoomLevelCache;
    NSMutableDictionary *_minMaxZoomLevelCache;
    double _lastMessageTimestamp;
}

@property (weak, nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;
@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deactivateResourceScenario:(int)a0;
- (void)closeConnection;
- (void)activateResourceScenario:(int)a0;
- (void)setManifestToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)deactivateResourceName:(id)a0;
- (void)deactivateResourceScale:(int)a0;
- (unsigned char)minimumZoomLevelForStyle:(int)a0;
- (id)serverQueue;
- (void)updateIfNecessary:(id /* block */)a0;
- (void)getResourceManifestWithHandler:(id /* block */)a0;
- (void)activateResourceScale:(int)a0;
- (oneway void)resetActiveTileGroup;
- (unsigned char)maximumZoomLevelForStyle:(int)a0;
- (oneway void)setActiveTileGroupIdentifier:(id)a0;
- (void)setActiveTileGroupIdentifier:(id)a0 updateType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)authToken;
- (void)openConnection;
- (void)cancelCurrentManifestUpdate;
- (id)initWithDelegate:(id)a0 configuration:(id)a1;
- (void)forceUpdate:(long long)a0 completionHandler:(id /* block */)a1;
- (id)updateProgress;
- (void)dealloc;
- (void)performOpportunisticResourceLoading;
- (id)configuration;
- (void)activateResourceName:(id)a0;
- (unsigned int)maximumZoomLevelForStyle:(int)a0 scale:(int)a1 outSize:(int *)a2;
- (void)_handleMessage:(id)a0 xpcMessage:(id)a1;
- (void).cxx_destruct;

@end
