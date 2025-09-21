@interface ConversationKit.ConversationControlsJoinCallCountdownView : NSView {
    void /* unknown type, empty encoding */ ringLayer;
    void /* unknown type, empty encoding */ countdownLayer;
    void /* unknown type, empty encoding */ percentageAnimation;
    void /* unknown type, empty encoding */ ringWidth;
    void /* unknown type, empty encoding */ fillColor;
    void /* unknown type, empty encoding */ strokeColor;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)initializeCountdownWithInitialValue:(double)a0 fullValue:(double)a1;
- (void)startCountdown;

@end
