@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver> {
    char _networkReachable;
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

- (void)dealloc;
- (id)init;
- (void)_reachabilityChanged:(id)a0;
- (void)_resetErrors;
- (char)anyFailures;
- (char)networkAvailable;
- (void)reportLoadFailure:(id)a0;
- (void)reportTileLoadSuccess:(id)a0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;

@end
