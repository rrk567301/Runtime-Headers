@class LAContext, WBSSavedAccountMatch, NSString, BrowserTabViewItem;
@protocol AutoFillLocalAuthenticationOperationDelegate;

@interface AutoFillLocalAuthenticationOperation : NSOperation <LAUIDelegate> {
    char _allowApplyingGracePeriod;
}

@property long long runningState;
@property (retain) LAContext *laContext;
@property (retain) WBSSavedAccountMatch *savedAccountMatch;
@property (weak) BrowserTabViewItem *tab;
@property (readonly, nonatomic) NSString *authenticationReason;
@property (weak, nonatomic) id<AutoFillLocalAuthenticationOperationDelegate> delegate;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (char)_shouldEvaluateAuthenticationPolicyWithSavedAccountMatch:(id)a0;
- (id)initWithAuthenticationReason:(id)a0;
- (id)initWithAuthenticationReason:(id)a0 savedAccountMatch:(id)a1 tab:(id)a2 allowApplyingGracePeriod:(char)a3;

@end
