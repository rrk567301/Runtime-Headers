@interface IRExportedObjectForwarder : NSObject

@property (weak, nonatomic) id exportedObject;
@property (retain, nonatomic) Class exportedObjectClass;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
