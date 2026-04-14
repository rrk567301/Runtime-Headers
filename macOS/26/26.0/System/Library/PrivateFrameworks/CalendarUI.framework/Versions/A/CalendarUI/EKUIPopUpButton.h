@class NSString, NSMutableDictionary, EKViewController, NSFont;

@interface EKUIPopUpButton : NSPopUpButton

@property (weak) EKViewController *viewController;
@property (copy) NSString *deemphasizedString;
@property (retain) NSMutableDictionary *abbreviatedTitles;
@property double targetWidth;
@property (retain) NSFont *titleFont;

+ (Class)cellClass;
+ (void)setupAppearanceForPopUpButton:(id)a0 withViewController:(id)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (id)initWithViewController:(id)a0;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)selectItemWithTag:(long long)a0;

@end
