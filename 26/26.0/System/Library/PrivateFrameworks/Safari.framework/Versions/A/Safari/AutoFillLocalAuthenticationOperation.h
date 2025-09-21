@class LAContext, WBSSavedAccountMatch, NSString, BrowserTabViewItem;
@protocol AutoFillLocalAuthenticationOperationDelegate;

@interface AutoFillLocalAuthenticationOperation : NSOperation <LAUIDelegate> {
    BOOL _allowApplyingGracePeriod;
}

@property long long runningState;
@property (retain) LAContext *laContext;
@property (retain) WBSSavedAccountMatch *savedAccountMatch;
@property (weak) BrowserTabViewItem *tab;
@property (readonly, nonatomic) NSString *authenticationReason;
@property (weak, nonatomic) id<AutoFillLocalAuthenticationOperationDelegate> delegate;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void)cancel;
- (void).cxx_destruct;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (BOOL)_shouldEvaluateAuthenticationPolicyWithSavedAccountMatch:(id)a0;
- (id)initWithAuthenticationReason:(id)a0;
- (id)initWithAuthenticationReason:(id)a0 savedAccountMatch:(id)a1 tab:(id)a2 allowApplyingGracePeriod:(BOOL)a3;

@end
