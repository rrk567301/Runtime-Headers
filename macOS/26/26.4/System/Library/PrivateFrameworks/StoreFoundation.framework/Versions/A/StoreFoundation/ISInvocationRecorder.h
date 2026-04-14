@interface ISInvocationRecorder : NSObject {
    id _target;
}

- (id)initWithTarget:(id)a0;
- (void)invokeInvocation:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (id)adjustedTargetForSelector:(SEL)a0;

@end
