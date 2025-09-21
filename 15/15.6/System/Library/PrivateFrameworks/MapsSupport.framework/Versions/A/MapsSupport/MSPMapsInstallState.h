@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    char _mapsInstalled;
    char _hasState;
}

+ (id)sharedState;
+ (char)isMapsAppInstalled;
+ (void)setRunningInsideMapsApp;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)_fetchMapsAppInstallState;
- (char)_isMapsAppInstalled;
- (void)receivedChangeNotification:(id)a0;
- (void)registerMapsInstallStateObserver:(id)a0;
- (void)unregisterMapsInstallStateObserver:(id)a0;

@end
