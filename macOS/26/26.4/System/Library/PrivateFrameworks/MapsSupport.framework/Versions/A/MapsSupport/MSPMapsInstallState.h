@class GEOObserverHashTable;

@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}

+ (void)setRunningInsideMapsApp;
+ (BOOL)isMapsAppInstalled;
+ (id)sharedState;

- (void)receivedChangeNotification:(id)a0;
- (void)unregisterMapsInstallStateObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isMapsAppInstalled;
- (void)registerMapsInstallStateObserver:(id)a0;
- (id)init;
- (BOOL)_fetchMapsAppInstallState;
- (void)dealloc;

@end
