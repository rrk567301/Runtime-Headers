@class NSView;

@interface SCUISensitiveContentOverlayView : NSView {
    void /* unknown type, empty encoding */ state;
    void /* function */ onAnalysisChanged;
    void /* function */ onShowContent;
    void /* function */ onHideContent;
    void /* function */ onDeleteContent;
    void /* function */ onShieldUp;
    void /* function */ onMessageSomeone;
    void /* function */ onLeaveConversation;
    void /* function */ onReportEvidenceRequested;
    void /* function */ onBlockParticipant;
    void /* function */ onEndCall;
    void /* function */ onUnsubscribe;
}

@property (nonatomic, copy) id /* block */ onAnalysisChanged;
@property (nonatomic, copy) id /* block */ onShowContent;
@property (nonatomic, copy) id /* block */ onHideContent;
@property (nonatomic, copy) id /* block */ onDeleteContent;
@property (nonatomic, copy) id /* block */ onShieldUp;
@property (nonatomic, copy) id /* block */ onMessageSomeone;
@property (nonatomic, copy) id /* block */ onLeaveConversation;
@property (nonatomic, copy) id /* block */ onReportEvidenceRequested;
@property (nonatomic, copy) id /* block */ onBlockParticipant;
@property (nonatomic, copy) id /* block */ onEndCall;
@property (nonatomic, copy) id /* block */ onUnsubscribe;
@property (nonatomic, retain) NSView *hostingView;

- (void)clear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithOptions:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)configureWithAnalysis:(id)a0;
- (void)configureWithParticipant:(id)a0 analysis:(id)a1;

@end
