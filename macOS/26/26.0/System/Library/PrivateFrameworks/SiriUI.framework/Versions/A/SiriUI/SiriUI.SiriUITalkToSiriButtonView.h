@interface SiriUI.SiriUITalkToSiriButtonView : NSView {
    void /* unknown type, empty encoding */ talkToSiriButtonView;
    void /* unknown type, empty encoding */ talkingToSiriButtonView;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void)setDisabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setIsListening:(BOOL)a0;

@end
