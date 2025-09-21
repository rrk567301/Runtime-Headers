@interface _TtC6AppKitP33_B20AA1257E16D4018E27D921D92487C835_NSTextFormattingColorComponentView : NSColorWell <NSAccessibilityStaticText> {
    void /* unknown type, empty encoding */ forBackgroundColor;
    void /* unknown type, empty encoding */ componentKey;
    void /* unknown type, empty encoding */ componentSize;
    void /* unknown type, empty encoding */ sizeConstraints;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

+ (Class)_visualProviderClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)accessibilityValue;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)_hasPullDownBehavior;
- (BOOL)_ownsColorPanelExclusively;
- (void)colorWellAction:(id)a0;
- (BOOL)isEmptyColorEnabled;

@end
