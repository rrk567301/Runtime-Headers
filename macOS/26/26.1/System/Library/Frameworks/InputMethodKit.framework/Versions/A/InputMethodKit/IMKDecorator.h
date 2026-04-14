@interface IMKDecorator : NSObject

@property (readonly, nonatomic) id decoratedInstance;
@property (readonly, nonatomic) id coreInstance;

- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)description;
- (void).cxx_destruct;
- (Class)class;
- (BOOL)isSubclassOfClass:(Class)a0;
- (Class)superclass;
- (id)initDecorating:(id)a0;

@end
