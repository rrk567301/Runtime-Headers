@interface CMSuppressionManager : NSObject {
    id _internal;
}

+ (BOOL)isAvailable;

- (void)dealloc;
- (id)init;
- (void)connect;
- (id)initPrivate;
- (void)startService;
- (void)onNotification:(id)a0;
- (struct CMSuppressionEventStruct { double x0; long long x1; unsigned long long x2; })currentSuppressionEvent;
- (void)deallocPrivate;
- (void)didDetectSignificantUserInteraction;
- (void)feedDevicePresenceEvent:(long long)a0 timestamp:(double)a1 force:(BOOL)a2;
- (void)feedSmartPowerNapEvent:(long long)a0 timestamp:(double)a1 force:(BOOL)a2;
- (void)feedViewObstructedEvent:(long long)a0 timestamp:(double)a1 force:(BOOL)a2;
- (void)onEclipseData:(const struct Suppress { double x0; BOOL x1; } *)a0;
- (void)onViewObstructedStateData:(const struct ViewObstructedState { double x0; struct ViewObstructedState { unsigned char x0; struct Suppress { unsigned char x0; BOOL x1; BOOL x2; unsigned char x3; unsigned char x4; unsigned char x5; float x6; float x7; } x1; float x2[4]; } x1; } *)a0;
- (void)sendServiceRequestPrivate;
- (void)sendSuppressionEventToClientPrivate;
- (void)sendViewObstructedRequestPrivate;
- (void)sendViewObstructedStateToClientPrivate;
- (void)simulateSignificantUserInteraction;
- (void)startSuppressionUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startSuppressionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startViewObstructedStateUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startViewObstructedStateUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopService;
- (void)stopSuppressionUpdates;
- (void)stopSuppressionUpdatesPrivate;
- (void)stopViewObstructedStateUpdates;
- (void)stopViewObstructedStateUpdatesPrivate;
- (void)updateCurrentSuppressionEvent:(long long)a0 timestamp:(double)a1 reason:(unsigned long long)a2;
- (void)updateSuppressionStateAndSendToClient;
- (id)viewObstructedBlocking;

@end
