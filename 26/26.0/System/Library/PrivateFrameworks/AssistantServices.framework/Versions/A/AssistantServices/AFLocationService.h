@class NSXPCConnection;

@interface AFLocationService : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)service;
- (void)dealloc;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)currentAuthorizationStyle:(id /* block */)a0;
- (void)currentLocationWithAccuracy:(double)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)currentLocationWithFetchRequest:(id)a0 completion:(id /* block */)a1;
- (void)dismissTCCDialogIfNeeded:(id /* block */)a0;
- (void)requestAuthorizationWithStyle:(unsigned long long)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)requestTemporaryAccuracyAuthorizationWithStyle:(unsigned long long)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)updateAuthorizationStyleWithUserSelection:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateAuthorizationStyleWithUserSelection:(unsigned long long)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)updateTemporaryAuthorizationForAccurateLocation:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateTemporaryAuthorizationForAccurateLocation:(BOOL)a0 timeout:(double)a1 completion:(id /* block */)a2;

@end
