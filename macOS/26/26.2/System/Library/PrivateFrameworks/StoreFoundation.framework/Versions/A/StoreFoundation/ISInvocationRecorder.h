@interface ISInvocationRecorder : NSObject {
    id _target;
}

- (id)initWithTarget:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)invokeInvocation:(id)a0;
- (void)dealloc;
- (id)adjustedTargetForSelector:(SEL)a0;

@end
