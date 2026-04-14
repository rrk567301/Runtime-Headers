@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (copy, nonatomic) NSArray *metadataIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } metadataRectOfInterest;
@property (nonatomic) int faceTrackingMaxFaces;
@property (nonatomic) BOOL faceTrackingUsesFaceRecognition;
@property (nonatomic) BOOL faceTrackingPlusEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;

@end
