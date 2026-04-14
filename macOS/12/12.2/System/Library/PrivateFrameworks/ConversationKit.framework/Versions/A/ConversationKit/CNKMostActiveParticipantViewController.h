@interface CNKMostActiveParticipantViewController : ConversationKit.PlatformViewController {
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ focusedParticipant;
    void /* unknown type, empty encoding */ isLocalMemberAuthorizedToChangeGroupMembership;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantView;
    void /* unknown type, empty encoding */ shouldShowActionTypePhotoCapture;
    void /* unknown type, empty encoding */ defaults;
}

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
