@class NSInvocation;

@interface TIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (void)invoke;
- (id)initWithInvocation:(id)a0;
- (void)addObserverToRunLoop;
- (BOOL)isValid;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void).cxx_destruct;
- (void)invalidate;

@end
