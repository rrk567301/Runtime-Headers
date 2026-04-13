@interface ConversationKit.LocalParticipantView : NSView {
    void /* unknown type, empty encoding */ participantView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dragEnabled;
    void /* unknown type, empty encoding */ blurEnabled;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ prefersControlsHidden;
    void /* unknown type, empty encoding */ isInRoster;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ controlsView;
@property (nonatomic, readonly) BOOL mouseDownCanMoveWindow;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;

@end
