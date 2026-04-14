@interface ConversationKit.ParticipantGridViewController : PlatformViewController {
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ participantsBeforeFocus;
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ nonFullScreenConstraints;
    void /* unknown type, empty encoding */ fullScreenConstraints;
    void /* unknown type, empty encoding */ isLocalMemberAuthorizedToChangeGroupMembership;
    void /* unknown type, empty encoding */ focusedParticipant;
    void /* unknown type, empty encoding */ sashedParticipant;
    void /* unknown type, empty encoding */ selectedParticipant;
    void /* unknown type, empty encoding */ fullScreenFocusedParticipant;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantGridViewControllerDelegate;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
