@class NSObject;

@interface SKWeakObjectProxy : NSObject

@property (readonly, weak, nonatomic) NSObject *target;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithForwardingTarget:(id)a0;

@end
