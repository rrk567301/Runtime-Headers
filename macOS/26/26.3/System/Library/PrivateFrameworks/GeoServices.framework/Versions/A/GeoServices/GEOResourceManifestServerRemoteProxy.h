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

- (void)updateIfNecessary:(id /* block */)a0;
- (void)deactivateResourceScenario:(int)a0;
- (void)deactivateResourceScale:(int)a0;
- (unsigned char)maximumZoomLevelForStyle:(int)a0;
- (void)activateResourceName:(id)a0;
- (void)getResourceManifestWithHandler:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 configuration:(id)a1;
- (id)authToken;
- (void)deactivateResourceName:(id)a0;
- (void)performOpportunisticResourceLoading;
- (unsigned char)minimumZoomLevelForStyle:(int)a0;
- (id)serverQueue;
- (oneway void)resetActiveTileGroup;
- (void)activateResourceScale:(int)a0;
- (void)closeConnection;
- (oneway void)setActiveTileGroupIdentifier:(id)a0;
- (id)updateProgress;
- (unsigned int)maximumZoomLevelForStyle:(int)a0 scale:(int)a1 outSize:(int *)a2;
- (void)forceUpdate:(long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_handleMessage:(id)a0 xpcMessage:(id)a1;
- (void)openConnection;
- (void)dealloc;
- (id)configuration;
- (void)setActiveTileGroupIdentifier:(id)a0 updateType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setManifestToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelCurrentManifestUpdate;
- (void)activateResourceScenario:(int)a0;

@end
