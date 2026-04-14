@class VUILabel, NSArray;

@interface VideosUI.SeasonPickerButton : NSControl {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ chevronDownImageView;
    void /* unknown type, empty encoding */ currentLabel;
    void /* unknown type, empty encoding */ altLabel;
    void /* unknown type, empty encoding */ textLayout;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ headerTitles;
}

@property (nonatomic, readonly) VUILabel *accessibilityCurrentLabel;
@property (nonatomic, readonly) VUILabel *accessibilityAltLabel;
@property (nonatomic, readonly) NSArray *accessibilityHeaderTitles;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityTitle;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)didSelectMenuItem:(id)a0;

@end
