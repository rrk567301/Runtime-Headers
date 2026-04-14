@interface IMInvocationTrampoline : NSObject

@property (retain) id target;

- (void).cxx_destruct;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)performInvocation:(id)a0;

@end
