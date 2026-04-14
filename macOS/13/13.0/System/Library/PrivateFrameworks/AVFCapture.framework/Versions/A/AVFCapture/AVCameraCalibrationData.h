@class NSData, AVCameraCalibrationDataInternal;

@interface AVCameraCalibrationData : NSObject {
    AVCameraCalibrationDataInternal *_internal;
}

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } intrinsicMatrix;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicMatrixReferenceDimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } extrinsicMatrix;
@property (readonly, nonatomic) float pixelSize;
@property (readonly, nonatomic) NSData *lensDistortionLookupTable;
@property (readonly, nonatomic) NSData *inverseLensDistortionLookupTable;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } lensDistortionCenter;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)cameraCalibrationDataDictionary;
- (struct CGImageMetadata { } *)copyAuxiliaryMetadata;
- (id)initWithCameraCalibrationDataDictionary:(id)a0 error:(id *)a1;
- (id)initWithAuxiliaryMetadata:(struct CGImageMetadata { } *)a0;
- (id)initWithDepthMetadataDictionary:(id)a0;
- (id)cameraCalibrationDataWithExifOrientation:(unsigned int)a0;
- (id)_initEmpty;
- (id)_distortionLookupTableFromCoefficients:(id)a0 distortionCenter:(struct CGPoint { double x0; double x1; })a1 pixelSize:(float)a2 referenceDimensions:(struct CGSize { double x0; double x1; })a3 lookupTableLength:(int)a4;

@end
