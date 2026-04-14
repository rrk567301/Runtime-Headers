@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (id)sharedState;
+ (void)setRunningInsideMapsApp;
+ (BOOL)isMapsAppInstalled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)receivedChangeNotification:(id)a0;
- (BOOL)_fetchMapsAppInstallState;
- (BOOL)_isMapsAppInstalled;
- (void)registerMapsInstallStateObserver:(id)a0;
- (void)unregisterMapsInstallStateObserver:(id)a0;

@end
