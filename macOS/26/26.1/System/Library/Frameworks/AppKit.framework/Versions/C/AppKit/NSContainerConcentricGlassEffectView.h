@interface NSContainerConcentricGlassEffectView : NSGlassEffectView {
    double _concentricMinimumCornerRadius;
    BOOL _allowsNonuniformCornerRadii;
}

@property double concentricMinimumCornerRadius;
@property BOOL allowsNonuniformCornerRadii;

- (id)_cornerConfiguration;

@end
