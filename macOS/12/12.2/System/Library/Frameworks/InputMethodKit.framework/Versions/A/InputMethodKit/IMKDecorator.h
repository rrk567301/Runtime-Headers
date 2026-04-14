@interface IMKDecorator : NSObject

@property (readonly, nonatomic) id decoratedInstance;
@property (readonly, nonatomic) id coreInstance;

- (Class)class;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)superclass;
- (id)description;
- (BOOL)isSubclassOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initDecorating:(id)a0;

@end
