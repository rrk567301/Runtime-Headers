@class NSButton;

@interface STKEmojiGenerationViewController : StickerKit.EmojiGenerationBaseController {
    void /* unknown type, empty encoding */ addButton;
    void /* unknown type, empty encoding */ previousButton;
    void /* unknown type, empty encoding */ nextButton;
    void /* unknown type, empty encoding */ initialFrame;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithPrompt:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)buttonDidPress:(id)a0;
- (void)_promptEntryViewTextDidChange:(id)a0;
- (void)addButtonPressed:(NSButton *)a0 completionHandler:(void (^)(void))a1;

@end
