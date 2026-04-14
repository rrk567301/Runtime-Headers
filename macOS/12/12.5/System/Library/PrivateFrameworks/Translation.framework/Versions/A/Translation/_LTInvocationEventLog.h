@class _LTInvocationEventContext;

@interface _LTInvocationEventLog : NSObject

@property (readonly, nonatomic) _LTInvocationEventContext *context;

- (id)init;
- (void).cxx_destruct;
- (void)setMode:(long long)a0;
- (void)start;
- (void)setSessionID:(id)a0;
- (void)setTask:(long long)a0;
- (void)setLocales:(id)a0;
- (void)endWithError:(id)a0;
- (void)endSuccessfully;
- (void)cancelWithReason:(id)a0;
- (void)setOnDevice:(BOOL)a0;

@end
