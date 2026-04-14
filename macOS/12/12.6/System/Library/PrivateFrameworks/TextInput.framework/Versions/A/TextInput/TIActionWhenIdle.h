@class NSInvocation;

@interface TIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (void)invalidate;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invoke;
- (id)initWithInvocation:(id)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)addObserverToRunLoop;

@end
