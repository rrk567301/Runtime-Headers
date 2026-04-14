@class NSString, CCFeaturePoints3D, CCFeaturePoints2D;

@interface CCPointBasedFeature : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) CCFeaturePoints2D *pointsInImage;
@property (retain, nonatomic) CCFeaturePoints3D *pointsInFeature;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraToFeature;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
