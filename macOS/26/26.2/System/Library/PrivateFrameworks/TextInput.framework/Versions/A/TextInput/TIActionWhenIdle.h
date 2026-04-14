@class NSInvocation;

@interface TIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (void)invalidate;
- (void)invoke;
- (id)initWithInvocation:(id)a0;
- (void)addObserverToRunLoop;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

@end
