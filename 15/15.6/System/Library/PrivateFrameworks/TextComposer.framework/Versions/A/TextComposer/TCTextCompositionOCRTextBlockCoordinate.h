@interface TCTextCompositionOCRTextBlockCoordinate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) float x;
@property (readonly, nonatomic) float y;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithX:(float)a0 y:(float)a1;

@end
