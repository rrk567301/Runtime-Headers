@class NSString, NSDictionary, NSFont;

@interface TTRMUIPopUpButton : NSPopUpButton

@property (copy, nonatomic) NSString *deemphasizedString;
@property (retain, nonatomic) NSDictionary *abbreviatedTitles;
@property (nonatomic) double targetWidth;
@property (retain, nonatomic) NSFont *titleFont;

+ (Class)cellClass;
+ (void)setupAppearanceForPopUpButton:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)selectItemWithTag:(long long)a0;

@end
