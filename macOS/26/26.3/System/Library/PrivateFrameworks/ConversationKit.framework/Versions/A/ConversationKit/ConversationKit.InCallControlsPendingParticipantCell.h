@interface ConversationKit.InCallControlsPendingParticipantCell : ConversationKit.InCallControlsParticipantCell {
    void /* unknown type, empty encoding */ actionButtonsStackView;
    void /* unknown type, empty encoding */ approveActionButton;
    void /* unknown type, empty encoding */ rejectActionButton;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ callDelegate;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didTapApproveButton;
- (void)didTapRejectButton;

@end
