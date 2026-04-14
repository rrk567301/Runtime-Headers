@interface CCAccessibilityColorFilterData : CCData {
    unsigned long long _selectedColorFilter;
    float _colorCorrectionAmount;
    BOOL _invertColors;
    BOOL _smartInvertColors;
    BOOL _reduceWhitePoint;
    float _reduceWhitePointAmount;
}

- (void)acceptVisitor:(id)a0;

@end
