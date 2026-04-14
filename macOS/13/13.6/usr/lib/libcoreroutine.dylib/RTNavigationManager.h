@class GEONavigationListener, NSString, GEONavigationRouteSummary, RTAuthorizationManager;

@interface RTNavigationManager : RTService <GEONavigationListenerDelegate>

@property (retain, nonatomic) GEONavigationListener *navigationListener;
@property (nonatomic) BOOL monitorRouteSummary;
@property (nonatomic) BOOL monitorNavigationState;
@property (nonatomic) BOOL routineEnabled;
@property (retain, nonatomic) GEONavigationRouteSummary *routeSummary;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (void)_shouldSetMonitorNavigationState;
- (void)_shouldSetMonitorRouteSummary;
- (void)_shouldSetNavigationListenerDelegate;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_updateNavigationState:(id)a0;
- (id)initWithAuthorizationManager:(id)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)navigationListener:(id)a0 didUpdateGuidanceState:(id)a1;
- (void)navigationListener:(id)a0 didUpdateRouteSummary:(id)a1;
- (void)onAuthorizationNotification:(id)a0;
- (void)setup;

@end
