@class NSInvocation;

@interface TIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (void)invoke;
- (BOOL)isValid;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)invalidate;
- (id)initWithInvocation:(id)a0;
- (void).cxx_destruct;
- (void)addObserverToRunLoop;

@end
