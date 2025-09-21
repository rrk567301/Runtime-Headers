@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface RPRemoteXPCListener : NSObject {
    char _invalidateCalled;
    char _invalidateDone;
}

@property (copy, nonatomic) id /* block */ acceptHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, copy, nonatomic) NSString *serviceName;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;

@end
