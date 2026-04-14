@interface InvocationTrampoline : NSObject

@property (retain) id target;

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)performInvocation:(id)a0;

@end
