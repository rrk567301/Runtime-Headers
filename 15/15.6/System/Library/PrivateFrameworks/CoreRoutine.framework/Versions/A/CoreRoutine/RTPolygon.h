@class RTCoordinate, NSArray;

@interface RTPolygon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) RTCoordinate *centroid;
@property (readonly, nonatomic) NSArray *vertices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCentroid:(id)a0 vertices:(id)a1;
- (id)initWithVertices:(id)a0;
- (char)isEqualToPolygon:(id)a0;

@end
