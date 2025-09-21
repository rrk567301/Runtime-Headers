@interface IMKDecorator : NSObject

@property (readonly, nonatomic) id decoratedInstance;
@property (readonly, nonatomic) id coreInstance;

- (Class)class;
- (char)conformsToProtocol:(id)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (char)isKindOfClass:(Class)a0;
- (char)isMemberOfClass:(Class)a0;
- (char)isSubclassOfClass:(Class)a0;
- (char)respondsToSelector:(SEL)a0;
- (Class)superclass;
- (void).cxx_destruct;
- (id)initDecorating:(id)a0;

@end
