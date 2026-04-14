@class RTCoordinate, NSArray;

@interface RTPolygon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTCoordinate *centroid;
@property (readonly, nonatomic) NSArray *vertices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCentroid:(id)a0 vertices:(id)a1;
- (id)initWithVertices:(id)a0;
- (BOOL)isEqualToPolygon:(id)a0;

@end
