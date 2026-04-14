@class NSViewController;

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
    void /* function */ didBlockParticipant;
    void /* function */ onEndCall;
    void /* function */ onEndCallAndReport;
    void /* function */ onEndReport;
    void /* function */ onUnsubscribe;
    void /* unknown type, empty encoding */ ignoreNonTokenConfigurationCalls;
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
@property (nonatomic, copy) id /* block */ didBlockParticipant;
@property (nonatomic, copy) id /* block */ onEndCall;
@property (nonatomic, copy) id /* block */ onEndCallAndReport;
@property (nonatomic, copy) id /* block */ onEndReport;
@property (nonatomic, copy) id /* block */ onUnsubscribe;
@property (nonatomic, retain) NSViewController *viewController;

- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
