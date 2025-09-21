@class WDStyle, WDParagraphProperties;

@interface WMParagraphStyle : WMStyle {
    WDStyle *_baseStyle;
    char _isInTextFrame;
    WDParagraphProperties *_defaultParagraphProperties;
}

+ (char)isShadingNull:(id)a0;

- (void).cxx_destruct;
- (void)addParagraphPropertiesFromStyle;
- (void)addParagraphProperties:(id)a0;
- (void)addParagraphPropertiesFromStyle:(id)a0;
- (void)addParagraphStyleCharacterProperties:(id)a0;
- (id)initWithDefaultProperties:(id)a0 isInTextFrame:(char)a1;
- (id)initWithDefaultProperties:(id)a0 style:(id)a1 isInTextFrame:(char)a2;
- (char)isRTLWithOverridesFromProperties:(id)a0;
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)a0;
- (void)mapBorders:(id)a0;
- (id)trailingMarginPropertyNameWithOverridesFromProperties:(id)a0;

@end
