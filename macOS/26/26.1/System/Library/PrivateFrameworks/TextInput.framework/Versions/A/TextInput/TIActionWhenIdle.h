@class NSInvocation;

@interface TIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (id)initWithInvocation:(id)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)invoke;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addObserverToRunLoop;
- (BOOL)isValid;

@end
