@class SiriUISiriStatusView, SiriUIConfiguration, NSString, NSView, SiriUIButton;
@protocol SiriUISiriViewDelegate;

@interface SiriUISiriView : NSView <SiriUISiriStatusViewDelegate, AFUISiriRemoteViewHosting>

@property (weak) SiriUISiriStatusView *statusView;
@property (weak) SiriUIButton *reportBugButton;
@property (retain, nonatomic) SiriUIConfiguration *configuration;
@property (weak, nonatomic) id<SiriUISiriViewDelegate> delegate;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL statusViewHidden;
@property (nonatomic) BOOL keepStatusViewHidden;
@property (nonatomic) long long siriSessionState;
@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSView *remoteContentView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;
- (void)siriWillActivateFromSource:(long long)a0;
- (void)siriDidActivateFromSource:(long long)a0;
- (void)audioInputPowerLevelDidUpdate:(float)a0;
- (void)setBugReportingAvailable:(BOOL)a0;
- (void)_updateControlsAppearance;
- (void)_animateButtonsHidden:(BOOL)a0;
- (BOOL)_showsReportBugButton;
- (void)siriStatusViewWasClicked:(id)a0;
- (void)siriStatusViewHoldDidBegin:(id)a0;
- (void)siriStatusViewHoldDidEnd:(id)a0;
- (void)siriStatusView:(id)a0 didReceiveTextInput:(id)a1;
- (void)closeButtonTapped:(id)a0;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)a0;
- (void)reportBugButtonTapped:(id)a0;
- (void)audioOutputPowerLevelDidUpdate:(float)a0;

@end
