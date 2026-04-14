@class NSString, LAContext;
@protocol AutoFillLocalAuthenticationOperationDelegate;

@interface AutoFillLocalAuthenticationOperation : NSOperation <LAUIDelegate>

@property long long runningState;
@property (retain) LAContext *laContext;
@property (readonly, nonatomic) NSString *authenticationReason;
@property (weak, nonatomic) id<AutoFillLocalAuthenticationOperationDelegate> delegate;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (id)initWithAuthenticationReason:(id)a0;

@end
