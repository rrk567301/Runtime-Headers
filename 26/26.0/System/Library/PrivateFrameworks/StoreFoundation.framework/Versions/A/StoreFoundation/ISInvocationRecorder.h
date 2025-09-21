@interface ISInvocationRecorder : NSObject {
    id _target;
}

- (void)dealloc;
- (id)initWithTarget:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)invokeInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)adjustedTargetForSelector:(SEL)a0;

@end
