@interface VSWeakForwardingTarget : NSObject

@property (weak, nonatomic) id object;

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
