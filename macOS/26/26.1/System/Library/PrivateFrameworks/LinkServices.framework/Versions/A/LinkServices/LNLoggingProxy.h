@interface LNLoggingProxy : NSProxy

@property (weak, nonatomic) id value;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;

@end
