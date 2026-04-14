@interface LNLoggingProxy : NSProxy

@property (weak, nonatomic) id value;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithValue:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;

@end
