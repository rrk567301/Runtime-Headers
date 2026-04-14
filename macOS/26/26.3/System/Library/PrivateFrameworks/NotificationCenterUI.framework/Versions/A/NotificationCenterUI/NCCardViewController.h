@class NSArray, NSView, NSViewController, _NCCardViewControllerContentView;

@interface NCCardViewController : NSViewController <NCMaterialDelegate> {
    NSArray *_layoutConstraints;
    NSView *_cardLayerView;
    _NCCardViewControllerContentView *_cardContentView;
    BOOL _needsLayout;
    BOOL _isSystemDark;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLayoutRectBounds;
}

@property (retain, nonatomic) NSViewController *headerController;
@property (retain, nonatomic) NSViewController *contentController;
@property (nonatomic) unsigned long long cardMaterial;
@property (nonatomic) BOOL onDarkBackdrop;
@property (nonatomic) BOOL cardVisible;

- (void)viewDidLayout;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)loadView;
- (void)viewWillLayout;
- (void)appearanceChanged:(BOOL)a0;
- (void)_layoutViews;
- (void)materialChanged:(unsigned char)a0;
- (void)_updateCardLook;

@end
