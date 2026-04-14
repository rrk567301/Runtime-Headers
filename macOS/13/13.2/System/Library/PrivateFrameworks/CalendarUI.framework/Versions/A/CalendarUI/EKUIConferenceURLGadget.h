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
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (BOOL)canBecomeKeyView;
- (id)initWithViewController:(id)a0;
- (id)control;
- (BOOL)shouldDisplay;
- (double)horizontalInset;
- (void)updateWithChanges:(id)a0;
- (void)conferenceAction;
- (id)makeControlView;
- (void)deleteConference;

@end
