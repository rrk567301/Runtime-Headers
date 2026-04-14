@class NSObject;

@interface SKWeakObjectProxy : NSObject

@property (readonly, weak, nonatomic) NSObject *target;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithForwardingTarget:(id)a0;

@end
