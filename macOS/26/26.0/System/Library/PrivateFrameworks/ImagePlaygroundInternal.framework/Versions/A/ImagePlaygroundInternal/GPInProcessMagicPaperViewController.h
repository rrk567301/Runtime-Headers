@class GPRecipe;

@interface GPInProcessMagicPaperViewController : NSViewController {
    void /* unknown type, empty encoding */ wandSelectionSignpostState;
    void /* unknown type, empty encoding */ blobToFirstPreviewSignpostState;
    void /* unknown type, empty encoding */ initialState;
    void /* unknown type, empty encoding */ magicViewController;
}

@property (class, nonatomic, readonly) BOOL available;

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic, retain) GPRecipe *recipe;

+ (void)prewarmEffectAndKeepItInMemory:(BOOL)a0 withCompletion:(id /* block */)a1;

- (void)setState:(id)a0;
- (void)viewWillDisappear;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUndoManager:(id)a0;
- (void)finishSelectionWithPath:(const struct CGPath { } *)a0 atPencilLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })magicViewFullFrame;
- (double)magicViewFullHeightForKeyboardScrolling;
- (void)startSelectionWithPath:(const struct CGPath { } *)a0 atPencilLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateSelectionWithPath:(const struct CGPath { } *)a0 atPencilLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)upscaleIfPossible;

@end
