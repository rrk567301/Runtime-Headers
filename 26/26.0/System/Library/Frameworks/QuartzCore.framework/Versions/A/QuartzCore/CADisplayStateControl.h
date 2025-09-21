@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CADisplayStateControl : NSObject {
    unsigned int _server_port;
    struct ClientIPC { unsigned int _port; NSObject<OS_dispatch_queue> *_queue; NSObject<OS_dispatch_source> *_source; } _client_ipc;
    unsigned int _display_id;
    void *_display_state;
    void *_shmem;
    struct Transition { unsigned int x0; char *x1; void /* function */ *x2; void /* function */ *x3; unsigned int x4; unsigned int x5; struct SpinLock { struct { int x0; } x0; } x6; long long x7; id /* block */ x8; unsigned char x9; } *_display_state_transition;
    struct Transition { unsigned int x0; char *x1; void /* function */ *x2; void /* function */ *x3; unsigned int x4; unsigned int x5; struct SpinLock { struct { int x0; } x0; } x6; long long x7; id /* block */ x8; unsigned char x9; } *_cloning_state_transition;
}

@property (readonly, nonatomic) long long targetDisplayState;
@property (readonly, nonatomic) long long targetCloningState;
@property (readonly, nonatomic) long long targetPowerState;
@property (readonly, nonatomic) long long displayState;
@property (readonly, nonatomic) long long cloningState;
@property (readonly, nonatomic) long long powerState;

- (void)dealloc;
- (id).cxx_construct;
- (char *)_copyAllPowerAssertionInfo;
- (char *)_copyStateInfo;
- (id)_initWithDisplayId:(unsigned int)a0;
- (void)acquireWirelessDisplayStateControl;
- (id)createPowerAssertionWithReason:(long long)a0 identifier:(id)a1;
- (void)displayCloningStateDidChange:(long long)a0 seed:(unsigned char)a1 result:(long long)a2;
- (void)displayStateDidChange:(long long)a0 seed:(unsigned char)a1 result:(long long)a2;
- (void)initializeClientPort;
- (void)transitionToCloningState:(long long)a0 withCompletion:(id /* block */)a1;
- (void)transitionToDisplayState:(long long)a0 withCompletion:(id /* block */)a1;

@end
