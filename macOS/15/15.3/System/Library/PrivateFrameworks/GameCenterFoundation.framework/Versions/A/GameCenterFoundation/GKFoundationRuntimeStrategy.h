@class GKDaemonProxy, NSURLSession;
@protocol GKUtilityService, GKUtilityServicePrivate;

@interface GKFoundationRuntimeStrategy : NSObject <GKRuntimeStrategy> {
    GKDaemonProxy *_daemonProxy;
}

@property (readonly) BOOL shouldRefreshPreferencesAfterBackgrounding;
@property (readonly) id<GKUtilityService> utilityService;
@property (readonly) id<GKUtilityServicePrivate> utilityServicePrivate;
@property (readonly) NSURLSession *instrumentedURLSession;

- (void).cxx_destruct;
- (id)localPlayer;
- (id)valueRestrictionForKey:(id)a0 handler:(id /* block */)a1;
- (id)initWithDaemonProxy:(id)a0;
- (void)requestClientsRemoteImageDataForURL:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (BOOL)restrictionEnabledForKey:(id)a0;
- (BOOL)restrictionEnabledForKey:(id)a0 applicationID:(id)a1;
- (id)valueRestrictionForKey:(id)a0;

@end
