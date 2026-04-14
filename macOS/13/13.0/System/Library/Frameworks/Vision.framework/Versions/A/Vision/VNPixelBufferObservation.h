@class NSString;

@interface VNPixelBufferObservation : VNObservation

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } croppedBoundingBox;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, copy, nonatomic) NSString *featureName;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:(id)a0 featureName:(id)a1 CVPixelBuffer:(struct __CVBuffer { } *)a2;
- (struct __CVBuffer { } *)createPixelBufferInOrientation:(unsigned int)a0 error:(id *)a1;

@end
