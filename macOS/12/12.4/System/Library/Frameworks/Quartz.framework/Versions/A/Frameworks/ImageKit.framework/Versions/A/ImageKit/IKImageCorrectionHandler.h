@class IKScanUIControllerAdvanced, NSMutableArray;

@interface IKImageCorrectionHandler : NSObject {
    long long _currentOverviewImageMode;
    int _imageCorrectionMode;
}

@property IKScanUIControllerAdvanced *scanUIController;
@property (nonatomic) BOOL textModeDitheringEnabled;
@property BOOL manualCorrectionEnabled;
@property (readonly) NSMutableArray *imageCorrections;

- (void)dealloc;
- (id)init;
- (struct CGImage { } *)copyCorrectedImageFromImage:(struct CGImage { } *)a0 ciContext:(id)a1 cgContext:(struct CGContext { } *)a2 requestedBitDepth:(unsigned long long)a3;
- (struct CGContext { } *)createContextForCGImage:(struct CGImage { } *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 alphaInfo:(unsigned int)a3 data:(void **)a4;
- (id)imageCorrectionInfo;
- (struct CGImage { } *)copyCorrectedImageFromImage:(struct CGImage { } *)a0 requestedBitDepth:(unsigned long long)a1;
- (BOOL)willApplyImageCorrection;
- (void)dumpFilterArray;
- (void)resetImageCorrection;
- (void)imageCorrectionChanged;
- (void)setupImageCorrectionForTextMode;
- (id)imageCorrectionForName:(id)a0;
- (void)setupImageCorrectionForGrayMode;
- (void)setupImageCorrectionForColorMode;
- (void)setupImageCorrection:(BOOL)a0;

@end
