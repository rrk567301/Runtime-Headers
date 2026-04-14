@interface IMInvocationTrampoline : NSObject

@property (retain) id target;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)performInvocation:(id)a0;

@end
