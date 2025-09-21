@class _TtC15ConversationKit19ParticipantInfoView, _TtC15ConversationKit23ParticipantMonogramView, _TtC15ConversationKit21ParticipantViewButton;

@interface ConversationKit.ParticipantView : NSView {
    void /* unknown type, empty encoding */ backgroundEffectsView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_monogramView;
    void /* unknown type, empty encoding */ videoView;
    void /* unknown type, empty encoding */ alertView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoOverlayView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_infoView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_prominenceBorderView;
    void /* unknown type, empty encoding */ debugLabel;
    void /* unknown type, empty encoding */ mostRecentViewModelHash;
    void /* unknown type, empty encoding */ loggingIdentifier;
    void /* unknown type, empty encoding */ hideInfoViewTimer;
    void /* unknown type, empty encoding */ hideAlertViewTimer;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ participantIdentifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ customCornerRadius;
}

@property (nonatomic, retain) _TtC15ConversationKit23ParticipantMonogramView *monogramView;
@property (nonatomic, retain) _TtC15ConversationKit19ParticipantInfoView *infoView;
@property (nonatomic, readonly) _TtC15ConversationKit21ParticipantViewButton *kickMemberButton;
@property (nonatomic) BOOL isInRoster;
@property (nonatomic) BOOL shouldOverrideShadowHidden;
@property (nonatomic) BOOL isExpanded;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)didTapKickMember;

@end
