@class NSView, NSString;

@interface SiriUIRequestHandlingStatusView : SiriSharedUIStandardView {
    NSView *_asrStatusView;
    NSView *_executionStatusView;
    NSString *_currentASRStatus;
    NSString *_currentExecutionStatus;
}

- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (void)handleRequestHandlingStatus:(id)a0;

@end
