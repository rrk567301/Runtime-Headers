@class _TtC15ConversationKit28LocalParticipantControlsView;

@interface ConversationKit.LocalParticipantView : NSView {
    void /* unknown type, empty encoding */ participantView;
    void /* unknown type, empty encoding */ buttonShelfHost;
    void /* unknown type, empty encoding */ buttonShelfView;
    void /* unknown type, empty encoding */ countdownLabel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dragEnabled;
    void /* unknown type, empty encoding */ blurEnabled;
    void /* unknown type, empty encoding */ backgroundReplacementEnabled;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ requiresControlsHidden;
    void /* unknown type, empty encoding */ requiresViewHidden;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ controlsHiddenByViewModel;
    void /* unknown type, empty encoding */ isInRoster;
    void /* unknown type, empty encoding */ aspectRatio;
    void /* unknown type, empty encoding */ localParticipantVideoOrientation;
    void /* unknown type, empty encoding */ shelfPiPControlsAlpha;
    void /* unknown type, empty encoding */ _videoMessagingState;
}

@property (nonatomic, readonly) _TtC15ConversationKit28LocalParticipantControlsView *controlsView;
@property (nonatomic, readonly) BOOL mouseDownCanMoveWindow;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
