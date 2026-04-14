@class NSString, NSMutableDictionary, EKViewController, NSFont;

@interface EKUIPopUpButton : NSPopUpButton

@property (weak) EKViewController *viewController;
@property (retain) NSString *deemphasizedString;
@property (retain) NSMutableDictionary *abbreviatedTitles;
@property double targetWidth;
@property (retain) NSFont *titleFont;

+ (Class)cellClass;
+ (void)setupAppearanceForPopUpButton:(id)a0 withViewController:(id)a1;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canBecomeKeyView;
- (id)initWithViewController:(id)a0;
- (BOOL)selectItemWithTag:(long long)a0;
- (struct CGSize { double x0; double x1; })buttonSize;

@end
