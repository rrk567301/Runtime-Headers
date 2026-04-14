@class NSButton, ResponsiveDesignPresetConfiguration;

@interface ResponsiveDesignPresetCollectionViewItem : NSCollectionViewItem

@property (retain, nonatomic) NSButton *button;
@property (readonly, nonatomic) ResponsiveDesignPresetConfiguration *presetConfiguration;

+ (id)keyPathsForValuesAffectingPresetConfiguration;

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)setSelected:(BOOL)a0;
- (id)button;
- (void)_buttonClicked:(id)a0;
- (id)_portraitImage;
- (id)_landscapeImage;

@end
