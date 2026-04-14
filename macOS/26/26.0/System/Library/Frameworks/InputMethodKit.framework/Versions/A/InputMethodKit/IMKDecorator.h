@interface IMKDecorator : NSObject

@property (readonly, nonatomic) id decoratedInstance;
@property (readonly, nonatomic) id coreInstance;

- (BOOL)isKindOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (void).cxx_destruct;
- (Class)class;
- (BOOL)isSubclassOfClass:(Class)a0;
- (Class)superclass;
- (id)initDecorating:(id)a0;

@end
