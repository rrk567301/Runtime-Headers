@class NSColor, NSString;

@interface PXViewSpec : NSObject <NSCopying>

@property (copy, nonatomic) NSColor *backgroundColor;
@property (copy, nonatomic) NSColor *selectionHighlightColor;
@property (copy, nonatomic) NSColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSString *cornerCurve;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) double displayScale;
@property (nonatomic) double rotationAngle;
@property (nonatomic) long long compositingFilterType;
@property (nonatomic, getter=isHidden) char hidden;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
