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
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (void)mouseDown:(id)a0;
- (void)didSelectMenuItem:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(char)a1;

@end
