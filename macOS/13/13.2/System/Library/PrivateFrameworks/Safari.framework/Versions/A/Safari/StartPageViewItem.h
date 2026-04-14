@class NSView, StartPageViewItemVisualEffect;

@interface StartPageViewItem : NSCollectionViewItem {
    StartPageViewItemVisualEffect *_visualEffectBackground;
    NSView *_safariBoxShadow;
}

@property (nonatomic) BOOL usesCompactAppearance;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (void)setAccessibilityLabel:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)loadView;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;

@end
