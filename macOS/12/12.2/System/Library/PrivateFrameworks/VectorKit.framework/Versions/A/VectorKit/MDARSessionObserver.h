@class ARSession, NSObject;
@protocol OS_dispatch_queue;

@interface MDARSessionObserver : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct ARSessionObserver { void /* function */ **x0; } *_observer;
}

@property (nonatomic) ARSession *session;

- (id)initWithObserver:(struct ARSessionObserver { void /* function */ **x0; } *)a0 onQueue:(id)a1;

@end
