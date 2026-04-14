@interface IMInvocationTrampoline : NSObject

@property (retain) id target;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (void)performInvocation:(id)a0;

@end
