@class NSXPCConnection;

@interface _NSProgressWithRemoteParent : NSProgress

@property (retain) NSXPCConnection *parentConnection;
@property unsigned long long sequence;

- (void)dealloc;
- (void)setCancellable:(char)a0;
- (void)setPausable:(char)a0;
- (void)_sendCancellableOrPausableUpdate:(char)a0 stringKey:(const char *)a1 intKey:(int)a2;
- (void)_setCancellable:(char)a0 fromChild:(char)a1;
- (void)_setPausable:(char)a0 fromChild:(char)a1;
- (void)_setUserInfoValue:(id)a0 forKey:(id)a1 fromChild:(char)a2;
- (void)_updateFractionCompleted:(struct _NSProgressFractionTuple { struct _NSProgressFraction { long long x0; long long x1; char x2; } x0; struct _NSProgressFraction { long long x0; long long x1; char x2; } x1; })a0;

@end
