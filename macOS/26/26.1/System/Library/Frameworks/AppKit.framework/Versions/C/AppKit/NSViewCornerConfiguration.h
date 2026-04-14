@class NSCornerStyle, _NSCornerRadius;

@interface NSViewCornerConfiguration : NSObject {
    NSCornerStyle *_topLeft;
    NSCornerStyle *_topRight;
    NSCornerStyle *_bottomLeft;
    NSCornerStyle *_bottomRight;
}

@property (class, readonly, copy) NSViewCornerConfiguration *squareCorners;
@property (class, readonly, copy) NSViewCornerConfiguration *capsuleCorners;
@property (class, readonly, copy) NSViewCornerConfiguration *capsuleCornerConfiguration;

@property (copy) NSCornerStyle *topLeft;
@property (copy) NSCornerStyle *topRight;
@property (copy) NSCornerStyle *bottomLeft;
@property (copy) NSCornerStyle *bottomRight;
@property (readonly) BOOL _isDependentOnOwnGeometry;
@property (readonly) BOOL _isDependentOnContainerCornerRadii;
@property (copy) _NSCornerRadius *_topLeftRadius;
@property (copy) _NSCornerRadius *_topRightRadius;
@property (copy) _NSCornerRadius *_bottomLeftRadius;
@property (copy) _NSCornerRadius *_bottomRightRadius;
@property long long _cornerUniformity;

+ (id)configurationWithUniformRadius:(id)a0;
+ (id)capsuleCornerConfigurationWithMaximumRadius:(double)a0;
+ (id)configurationWithRadius:(id)a0;
+ (id)configurationWithTopLeftRadius:(id)a0 topRightRadius:(id)a1 bottomLeftRadius:(id)a2 bottomRightRadius:(id)a3;
+ (id)configurationWithUniformBottomRadius:(id)a0 topLeftRadius:(id)a1 topRightRadius:(id)a2;
+ (id)configurationWithUniformLeftRadius:(id)a0 rightRadius:(id)a1;
+ (id)configurationWithUniformLeftRadius:(id)a0 topRightRadius:(id)a1 bottomRightRadius:(id)a2;
+ (id)configurationWithUniformRightRadius:(id)a0 topLeftRadius:(id)a1 bottomLeftRadius:(id)a2;
+ (id)configurationWithUniformTopRadius:(id)a0 bottomLeftRadius:(id)a1 bottomRightRadius:(id)a2;
+ (id)configurationWithUniformTopRadius:(id)a0 bottomRadius:(id)a1;
+ (id)containerConcentric;
+ (id)containerConcentricWithMinimumRadiiStyle:(id)a0;
+ (id)containerConcentricWithMinimumRadiiStyle:(id)a0 symmetric:(BOOL)a1;
+ (id)fixedCornersWithRadius:(double)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_resolvedCornerRadiiForSubviewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerCornerRadii:(id)a2 isFlipped:(BOOL)a3;
- (id)initWithCornerRadius:(id)a0 cornerUniformity:(long long)a1;
- (id)initWithCornerStyle:(id)a0;
- (id)initWithTopLeft:(id)a0 topRight:(id)a1 bottomLeft:(id)a2 bottomRight:(id)a3;
- (id)initWithTopLeft:(id)a0 topRight:(id)a1 bottomLeft:(id)a2 bottomRight:(id)a3 symmetric:(BOOL)a4;
- (id)initWithTopLeftRadius:(id)a0 topRightRadius:(id)a1 bottomLeftRadius:(id)a2 bottomRightRadius:(id)a3 cornerUniformity:(long long)a4;
- (BOOL)isUsingNewAPI;

@end
