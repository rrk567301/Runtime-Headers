@interface ULWeakProxy : NSObject

@property (weak, nonatomic) id object;
@property (retain, nonatomic) Class class;

- (id)initWithObject:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
