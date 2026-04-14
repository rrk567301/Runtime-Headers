@interface CalWeakWrapperProxyObject : NSObject

@property (weak, nonatomic) id wrappedObject;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithWrappedObject:(id)a0;

@end
