@interface AXMOutputComponent : NSObject

@property (class, readonly, nonatomic) char isSupported;

@property (nonatomic) long long componentState;

- (id)description;
- (id)init;
- (char)canHandleRequest:(id)a0;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;
- (void)transitionToState:(long long)a0 completion:(id /* block */)a1;

@end
