@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver> {
    BOOL _networkReachable;
    unsigned long long _errorCount;
    int _symptomsAlternateAdviceToken;
    unsigned long long _xpcErrors;
    int _daemonLaunchNotifyToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedReachability;

- (void)_reachabilityChanged:(id)a0;
- (void)dealloc;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)reportTileLoadSuccess:(id)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (void)reportLoadFailure:(id)a0;
- (BOOL)anyFailures;
- (id)init;
- (void)_resetErrors;
- (BOOL)networkAvailable;

@end
