@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CMActivityManagerInternal : NSObject {
    void *fLocationdConnection;
    id /* block */ fActivityHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    char fSubscribedToMotionState;
    NSObject<OS_dispatch_semaphore> *fSidebandOverrideSemaphore;
    NSObject<OS_dispatch_queue> *fSidebandOverrideQueue;
    char fSidebandOverrideWaiting;
    long long fSidebandOverrideResult;
    NSObject<OS_dispatch_semaphore> *fMotionStateSimSemaphore;
    NSObject<OS_dispatch_queue> *fMotionStateSimQueue;
    char fMotionStateSimWaiting;
    long long fMotionStateSimResult;
    long long fMotionStateYouthSimResult;
}

- (void)dealloc;
- (id)init;
- (void)disconnect;
- (void)connect;
- (void)overrideOscarSideband:(char)a0 withState:(long long)a1;
- (void)simulateMotionState:(char)a0 withState:(long long)a1;
- (void)simulateMotionStateYouthWithState:(long long)a0;
- (void)startActivityUpdatesWithHandlerPrivate:(id /* block */)a0;
- (void)stopActivityUpdatesPrivate;

@end
