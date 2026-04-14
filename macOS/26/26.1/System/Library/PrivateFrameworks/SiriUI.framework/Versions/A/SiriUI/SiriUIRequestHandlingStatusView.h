@class NSView, NSString;

@interface SiriUIRequestHandlingStatusView : SiriSharedUIStandardView {
    NSView *_asrStatusView;
    NSView *_executionStatusView;
    NSString *_currentASRStatus;
    NSString *_currentExecutionStatus;
}

- (void)layout;
- (void).cxx_destruct;
- (id)init;
- (void)handleRequestHandlingStatus:(id)a0;

@end
