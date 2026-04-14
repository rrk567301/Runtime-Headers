@class NSStackView, NSButton, NSString;

@interface EKUIContactAllAttendeesGadget : EKUISingleViewGadget <NSSharingServiceDelegate>

@property (retain) NSStackView *buttonContainer;
@property (retain) NSButton *emailAllButton;
@property (retain) NSButton *messageAllButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0;
- (double)verticalPadding;
- (void).cxx_destruct;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (id)control;
- (id)_allParticipantsToSendMessageToFromEvent:(id)a0;
- (void)emailAttendeesForEvent:(id)a0;
- (void)emailButtonTapped:(id)a0;
- (void)emailParticipants:(id)a0 forEvent:(id)a1;
- (void)messageAttendeesForEvent:(id)a0;
- (void)messageButtonTapped:(id)a0;
- (void)messageParticipants:(id)a0 forEvent:(id)a1;
- (BOOL)shouldBeFullWidth;
- (BOOL)shouldDisplay;

@end
