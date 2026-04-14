@class NSView, StartPageViewItemVisualEffect;
@protocol StartPageBackgroundImageIdentifierProvider;

@interface StartPageViewItem : NSCollectionViewItem {
    StartPageViewItemVisualEffect *_visualEffectBackground;
    NSView *_safariBoxShadow;
}

@property (nonatomic) BOOL usesCompactAppearance;
@property (weak, nonatomic) id<StartPageBackgroundImageIdentifierProvider> backgroundImageIdentifierProvider;
@property (nonatomic) BOOL usesBoxShadow;

- (void)loadView;
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)setAccessibilityLabel:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)viewWillAppear;

@end
