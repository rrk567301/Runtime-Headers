@interface ULWeakProxy : NSObject

@property (weak, nonatomic) id object;
@property (retain, nonatomic) Class class;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
