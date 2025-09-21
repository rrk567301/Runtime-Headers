@interface WKPDFConfiguration : NSObject <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) char allowTransparentBackground;

+ (char)accessInstanceVariablesDirectly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
