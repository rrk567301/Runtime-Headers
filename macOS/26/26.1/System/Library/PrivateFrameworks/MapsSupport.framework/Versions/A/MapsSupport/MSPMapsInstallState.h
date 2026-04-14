@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (id)sharedState;
+ (BOOL)isMapsAppInstalled;
+ (void)setRunningInsideMapsApp;

- (void)receivedChangeNotification:(id)a0;
- (void)dealloc;
- (BOOL)_isMapsAppInstalled;
- (void).cxx_destruct;
- (BOOL)_fetchMapsAppInstallState;
- (void)unregisterMapsInstallStateObserver:(id)a0;
- (id)init;
- (void)registerMapsInstallStateObserver:(id)a0;

@end
