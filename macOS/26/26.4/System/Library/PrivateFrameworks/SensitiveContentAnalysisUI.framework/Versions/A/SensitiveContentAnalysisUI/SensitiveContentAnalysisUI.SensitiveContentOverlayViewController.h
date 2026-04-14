@interface SensitiveContentAnalysisUI.SensitiveContentOverlayViewController : NSViewController {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ onAnalysisChanged;
    void /* unknown type, empty encoding */ onShowContent;
    void /* unknown type, empty encoding */ onHideContent;
    void /* unknown type, empty encoding */ onDeleteContent;
    void /* unknown type, empty encoding */ onShieldUp;
    void /* unknown type, empty encoding */ onMessageSomeone;
    void /* unknown type, empty encoding */ onLeaveConversation;
    void /* unknown type, empty encoding */ onBlockParticipant;
    void /* unknown type, empty encoding */ didBlockParticipant;
    void /* unknown type, empty encoding */ onEndCall;
    void /* unknown type, empty encoding */ onEndCallAndReport;
    void /* unknown type, empty encoding */ onEndReport;
    void /* unknown type, empty encoding */ onUnsubscribe;
    void /* unknown type, empty encoding */ onReportEvidenceRequested;
    void /* unknown type, empty encoding */ ignoreNonTokenConfigurationCalls;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
