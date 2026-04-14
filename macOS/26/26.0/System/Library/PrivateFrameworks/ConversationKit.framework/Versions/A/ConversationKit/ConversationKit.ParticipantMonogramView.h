@class NSButton, _TtC15ConversationKit33ParticipantViewLabelContainerView;

@interface ConversationKit.ParticipantMonogramView : NSView {
    void /* unknown type, empty encoding */ colorStyle;
    void /* unknown type, empty encoding */ contactView;
    void /* unknown type, empty encoding */ glowClippingView;
    void /* unknown type, empty encoding */ glowView;
    void /* unknown type, empty encoding */ audioVisualizationView;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ isInRoster;
    void /* unknown type, empty encoding */ customCornerRadius;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ participantMonogramViewLayout;
}

@property (nonatomic, retain) NSButton *ringButton;
@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *titleLabelContainer;
@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *subtitleLabelContainer;
@property (nonatomic, readonly) BOOL flipped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)didTapRingButton;

@end
