@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding> {
    int _direction;
    float _angle;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) float angle;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLaneArrowHead:(id)a0;

@end
