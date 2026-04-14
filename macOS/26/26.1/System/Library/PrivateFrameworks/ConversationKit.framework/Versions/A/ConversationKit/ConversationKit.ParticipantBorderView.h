@interface ConversationKit.ParticipantBorderView : NSView {
    void /* unknown type, empty encoding */ borderWidth;
    void /* unknown type, empty encoding */ customCornerRadius;
    void /* unknown type, empty encoding */ blurView;
    void /* unknown type, empty encoding */ localParticipant;
}

- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
