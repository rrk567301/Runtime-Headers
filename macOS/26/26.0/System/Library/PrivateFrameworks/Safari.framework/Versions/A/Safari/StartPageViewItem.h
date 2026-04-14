@class NSView, StartPageViewItemVisualEffect;
@protocol StartPageBackgroundImageIdentifierProvider;

@interface StartPageViewItem : NSCollectionViewItem {
    StartPageViewItemVisualEffect *_visualEffectBackground;
    NSView *_safariBoxShadow;
}

@property (nonatomic) BOOL usesCompactAppearance;
@property (weak, nonatomic) id<StartPageBackgroundImageIdentifierProvider> backgroundImageIdentifierProvider;
@property (nonatomic) BOOL usesBoxShadow;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)accessibilityRole;
- (void)applyLayoutAttributes:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;

@end
