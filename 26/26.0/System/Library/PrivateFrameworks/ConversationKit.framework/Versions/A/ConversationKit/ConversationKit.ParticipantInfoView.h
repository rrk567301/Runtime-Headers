@class _TtC15ConversationKit33ParticipantViewLabelContainerView;

@interface ConversationKit.ParticipantInfoView : NSView {
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ shutterButton;
    void /* unknown type, empty encoding */ expandButton;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ customCornerRadius;
    void /* unknown type, empty encoding */ recordingLocalVideo;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *nameLabel;
@property (nonatomic) BOOL isMomentsAvailable;
@property (nonatomic) double alphaValue;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)didTapExpandButton;
- (void)didTapShutterButton;

@end
