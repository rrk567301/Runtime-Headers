@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (BOOL)isMapsAppInstalled;
+ (void)setRunningInsideMapsApp;
+ (id)sharedState;

- (void)dealloc;
- (BOOL)_isMapsAppInstalled;
- (id)init;
- (void)receivedChangeNotification:(id)a0;
- (BOOL)_fetchMapsAppInstallState;
- (void)unregisterMapsInstallStateObserver:(id)a0;
- (void)registerMapsInstallStateObserver:(id)a0;
- (void).cxx_destruct;

@end
