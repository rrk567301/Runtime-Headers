@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (id)sharedState;
+ (BOOL)isMapsAppInstalled;
+ (void)setRunningInsideMapsApp;

- (void)registerMapsInstallStateObserver:(id)a0;
- (id)init;
- (void)unregisterMapsInstallStateObserver:(id)a0;
- (BOOL)_isMapsAppInstalled;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_fetchMapsAppInstallState;
- (void)receivedChangeNotification:(id)a0;

@end
