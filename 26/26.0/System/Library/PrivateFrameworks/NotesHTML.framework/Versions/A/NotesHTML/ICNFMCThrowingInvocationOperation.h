@interface ICNFMCThrowingInvocationOperation : NSInvocationOperation

@property (weak) id target;

- (void)main;
- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (id)initWithInvocation:(id)a0;
- (void).cxx_destruct;

@end
