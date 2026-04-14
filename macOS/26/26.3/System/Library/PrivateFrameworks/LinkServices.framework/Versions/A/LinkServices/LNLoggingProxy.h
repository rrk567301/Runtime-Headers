@interface LNLoggingProxy : NSProxy

@property (weak, nonatomic) id value;

- (id)initWithValue:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
