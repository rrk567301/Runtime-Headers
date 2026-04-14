@class NSString, NSColor;

@interface ICAttributionViewHighlightConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adjustedFrame;
@property (copy, nonatomic) NSColor *color;
@property (nonatomic) double alpha;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToICAttributionViewHighlightConfiguration:(id)a0;

@end
