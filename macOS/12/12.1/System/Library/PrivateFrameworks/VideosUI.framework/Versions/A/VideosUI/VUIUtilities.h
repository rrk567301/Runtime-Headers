@interface VUIUtilities : NSObject

+ (id)getOSVersion;
+ (id)randomColor;
+ (id)gradientLayerLocationsFromSpacings:(id)a0 height:(double)a1;
+ (double)imageCornerRadiusWithStyle:(long long)a0;
+ (BOOL)isInRetailDemoMode;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vuiRectCenteredXInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boundsToCenterIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
