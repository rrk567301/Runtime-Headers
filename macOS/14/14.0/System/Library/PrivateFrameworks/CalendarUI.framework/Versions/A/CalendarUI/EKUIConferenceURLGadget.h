@class NSString, NSView, EKUIVirtualConference, NSButton, EKUIConferenceToken;

@interface EKUIConferenceURLGadget : EKUISingleViewGadget <CalUITextFieldEditorDelegate, EKUITokenFieldDelegate>

@property (retain) NSView *controlView;
@property (retain) NSButton *actionButton;
@property (retain) EKUIConferenceToken *tokenButton;
@property (retain) EKUIVirtualConference *currentConference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)control;
- (id)initWithViewController:(id)a0;
- (id)makeControlView;
- (double)horizontalInset;
- (void)conferenceAction;
- (void)deleteConference;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
