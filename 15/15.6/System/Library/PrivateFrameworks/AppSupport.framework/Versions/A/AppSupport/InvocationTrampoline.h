@interface InvocationTrampoline : NSObject

@property (retain) id target;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void)performInvocation:(id)a0;

@end
