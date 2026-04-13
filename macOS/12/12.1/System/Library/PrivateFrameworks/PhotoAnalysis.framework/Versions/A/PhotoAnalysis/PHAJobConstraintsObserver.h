@class PHAJobConstraints;
@protocol PHAJobConstraintsObserverDelegate;

@interface PHAJobConstraintsObserver : NSObject

@property (retain, nonatomic) PHAJobConstraints *currentConstraints;
@property (weak, nonatomic) id<PHAJobConstraintsObserverDelegate> delegate;
@property BOOL shutdownRequested;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setShutdownRequested;
- (id)initWithInitialConstraints:(id)a0 delegate:(id)a1;
- (id)acceptConstraints:(id)a0 mask:(id)a1 completion:(id /* block */)a2;

@end
