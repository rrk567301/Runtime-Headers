@interface _WebSafeForwarder : NSObject {
    id _target;
    id _defaultTarget;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithTarget:(id)a0 defaultTarget:(id)a1;

@end
