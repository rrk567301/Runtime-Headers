@class NSImage, NSColor, MKMarkerStyleConfiguration;

@interface MKMarkerStyle : NSObject

@property (readonly, nonatomic) NSImage *balloonImage;
@property (readonly, nonatomic) NSImage *dotImage;
@property (readonly, nonatomic) NSColor *defaultGlyphColor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } balloonRect;
@property (readonly, nonatomic) double balloonYOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dotRect;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (readonly, nonatomic) MKMarkerStyleConfiguration *configuration;

+ (id)poiMarkerStyleForConfiguration:(id)a0;
+ (id)defaultSelectedMarkerStyleForScale:(double)a0;
+ (id)defaultUnselectedMarkerStyleForScale:(double)a0;
+ (id)markerStyleForConfiguration:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_anchorPointFromIcon:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1;
- (id)_imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)initWithBalloonIcon:(id)a0 configuration:(id)a1;

@end
