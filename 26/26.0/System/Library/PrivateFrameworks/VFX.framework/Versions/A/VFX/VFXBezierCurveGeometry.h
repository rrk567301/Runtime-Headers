@class NSString;

@interface VFXBezierCurveGeometry : NSObject <VFXGeometry> {
    struct __CFXBezierCurveGeometry { } *_geometry;
    unsigned char _isPresentationObject : 1;
    struct CGPath { } *_cgPath;
    struct { void /* unknown type, empty encoding */ columns[4]; } _curveToGeometryTransform;
    NSString *_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGPath { } *CGPath;
@property (retain, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[2]; } boundingBox;

+ (id)bezierCurveGeometryWithGeometryRef:(struct __CFXBezierCurveGeometry { } *)a0;

- (id)identifier;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setIdentifier:(id)a0;
- (void *)__CFObject;
- (BOOL)getBoundingSphereCenter:(void *)a0 radius:(float *)a1;
- (id)initWithGeometryRef:(struct __CFXBezierCurveGeometry { } *)a0;
- (id)initWithCGPath:(struct CGPath { } *)a0;
- (id)initWithCGPath:(struct CGPath { } *)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)_updateEntityModelFromPresentation;
- (void)_updateEntityPresentationFromModel;
- (void)makeUniqueID;

@end
