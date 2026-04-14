@class NSAffineTransform, NSAppearance;

@interface NSViewHostingTraits : NSObject <NSCopying>

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hostingBounds;
@property (retain) NSAppearance *appearance;
@property long long layoutDirection;
@property (copy) NSAffineTransform *screenTransform;
@property double displayScale;
@property BOOL appearsKey;
@property (getter=isFlipped) BOOL flipped;
@property (getter=isVisible) BOOL visible;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
