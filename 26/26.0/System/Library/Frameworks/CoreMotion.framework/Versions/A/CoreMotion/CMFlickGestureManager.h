@interface CMFlickGestureManager : NSObject {
    id _internal;
}

+ (id)sharedManager;
+ (BOOL)isAvailable;

- (void)dealloc;
- (void)stopUpdates;
- (id)init;
- (void)stopService;
- (void)connect;
- (void)startService;
- (void)deallocPrivate;
- (void)onNotification:(id)a0;
- (void)logClientEventWithType:(id)a0 payload:(id)a1;
- (void)feedFlickGestureEvent:(long long)a0 timestamp:(double)a1;
- (void)onFlickGestureData:(const struct FlickGestureState { double x0; unsigned char x1; BOOL x2; } *)a0;
- (void)sendEventToClientPrivate;
- (void)sendServiceRequestPrivate;
- (void)startUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopUpdatesPrivate;

@end
