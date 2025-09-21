@class NSString;

@interface WFAQIScaleGradientStop : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float location;
@property (readonly, nonatomic) NSString *color;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocation:(float)a0 color:(id)a1;

@end
