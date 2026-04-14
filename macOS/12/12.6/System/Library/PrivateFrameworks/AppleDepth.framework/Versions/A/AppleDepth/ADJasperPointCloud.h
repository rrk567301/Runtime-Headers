@interface ADJasperPointCloud : NSObject {
    struct JasperPointCloud { struct unique_ptr<unsigned char [], std::default_delete<unsigned char []>> { struct __compressed_pair<unsigned char *, std::default_delete<unsigned char []>> { char *__value_; } __ptr_; } m_ownedStorage; struct JasperPointCloudDataHeader *m_header; unsigned long long m_capacity; } _pc;
    struct __CVBuffer { } *_dataBuffer;
}

@property (readonly) int length;
@property (readonly) const float *euclideanDistances;
@property (readonly) const struct CGPoint { double x0; double x1; } *cameraPixels;
@property (readonly) const struct CGPoint { double x0; double x1; } *undistortedCameraPixels;
@property (readonly) const void *points;
@property (readonly) const float *intensities;
@property (readonly) const float *confidences;
@property (readonly) const float *signalToNoiseRatios;
@property (readonly) const char *bankIds;
@property (readonly) const char *spotIds;
@property (readonly) const char *echoIds;
@property (readonly) const unsigned int *flags;

+ (unsigned int)pixelFormat;
+ (id)pointCloudByMergingPointClouds:(id)a0 applyingTransforms:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1 projectingToCamera:(id)a2;
+ (BOOL)prepareDataBuffer:(struct __CVBuffer { } *)a0 forLength:(int)a1;
+ (id)JasperCSVAttributeNamesCannonicalOrder;
+ (long long)getKeyForName:(id)a0;
+ (id)pointCloudFromCSV:(id)a0;
+ (id)pointCloudFromJSPP:(id)a0;
+ (unsigned long long)requiredStorageBytesForLength:(int)a0;
+ (id)makeWithDataBuffer:(struct __CVBuffer { } *)a0;
+ (id)pointCloudFromFile:(id)a0;
+ (id)pointCloudByMergingPointClouds:(id)a0;
+ (void)setPerformanceOverrides:(id)a0;
+ (void)resetPerformanceOverrides;

- (int)size;
- (void)dealloc;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)reset;
- (id)initWithLength:(int)a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)dictionaryRepresentation;
- (struct __CVBuffer { } *)dataBuffer;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)debugQuickLookObject;
- (id)initWithDataBuffer:(struct __CVBuffer { } *)a0;
- (id)jpegRepresentation;
- (id)pointCloudByApplyingFilter:(id)a0;
- (long long)projectJasperPointsCroppedBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotatedBy:(long long)a1 andScaledInto:(struct __CVBuffer { } *)a2;
- (id)pointCloudByChangingPointOfViewByTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 to:(id)a1;
- (id)initWithPointCloud:(id)a0;
- (long long)projectJasperPointsFilteredBy:(id)a0 croppedBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotatedBy:(long long)a2 andScaledInto:(struct __CVBuffer { } *)a3;
- (BOOL)pointCloudToCSV:(id)a0 atomically:(BOOL)a1;
- (BOOL)pointCloudToJSPP:(id)a0 atomically:(BOOL)a1;
- (BOOL)pointCloudToImageFile:(id)a0 uti:(id)a1 atomically:(BOOL)a2;
- (id)initByMergingPointClouds:(id)a0;
- (struct CGImage { } *)cgImageRepresentation;
- (id)imageRepresentationForUTI:(id)a0;
- (id)initWithLength:(int)a0 storage:(struct __CVBuffer { } *)a1;
- (long long)projectJasperPointsFilteredBy:(id)a0 croppedBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotatedBy:(long long)a2 andScaledMergingWith:(struct __CVBuffer { } *)a3;
- (id)pointCloudByChangingPointOfViewFrom:(id)a0 to:(id)a1;
- (id)pngRepresentation;

@end
