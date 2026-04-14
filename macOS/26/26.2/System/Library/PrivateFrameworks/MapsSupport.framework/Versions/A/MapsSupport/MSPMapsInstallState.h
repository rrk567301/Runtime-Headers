@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (BOOL)isMapsAppInstalled;
+ (void)setRunningInsideMapsApp;
+ (id)sharedState;

- (BOOL)_fetchMapsAppInstallState;
- (void)receivedChangeNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterMapsInstallStateObserver:(id)a0;
- (void)registerMapsInstallStateObserver:(id)a0;
- (BOOL)_isMapsAppInstalled;
- (void)dealloc;

@end
