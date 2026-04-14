@class ARSession, NSObject;
@protocol OS_dispatch_queue;

@interface MDARSessionObserver : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (weak, nonatomic) ARSession *session;
@property (nonatomic) struct ARSessionObserver { void /* function */ **x0; } *observer;

- (id)initWithObserver:(struct ARSessionObserver { void /* function */ **x0; } *)a0 onQueue:(id)a1;
- (void).cxx_destruct;

@end
