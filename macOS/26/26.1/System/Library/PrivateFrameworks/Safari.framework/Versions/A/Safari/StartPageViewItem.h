@class NSView, StartPageViewItemVisualEffect;
@protocol StartPageBackgroundImageIdentifierProvider;

@interface StartPageViewItem : NSCollectionViewItem {
    StartPageViewItemVisualEffect *_visualEffectBackground;
    NSView *_safariBoxShadow;
}

@property (nonatomic) BOOL usesCompactAppearance;
@property (weak, nonatomic) id<StartPageBackgroundImageIdentifierProvider> backgroundImageIdentifierProvider;
@property (nonatomic) BOOL usesBoxShadow;

- (void)viewDidLoad;
- (void)mouseUp:(id)a0;
- (void)loadView;
- (id)accessibilityRole;
- (void)setAccessibilityLabel:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)viewWillAppear;

@end
