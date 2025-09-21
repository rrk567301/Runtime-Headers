@class NSString, TSDCapabilities, NSURL, TSARenderingExporter, TSUColor;
@protocol TSKImageExporter;

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    TSARenderingExporter<TSKImageExporter> *mRenderingExporter;
    NSURL *mURL;
    TSDCapabilities *mCapabilities;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) char scaleToFit;
@property (retain, nonatomic) TSUColor *backgroundColor;
@property (copy, nonatomic) NSString *imageType;
@property (nonatomic) float compressionFactor;
@property (nonatomic) long long transferFunction;
@property (nonatomic) char exportWithAlpha;
@property (readonly, nonatomic) char currentTransferFunctionRequiresSDRCGContext;
@property (readonly, nonatomic) char currentTransferFunctionRequiresHDRCGContext;

- (void).cxx_destruct;
- (void)teardown;
- (void)setup;
- (double)viewScale;
- (id)initWithRenderingExporter:(id)a0;
- (struct CGContext { } *)newCGContextForURL:(id)a0;
- (struct CGContext { } *)newHDRCGContextForURL:(id)a0;
- (char)p_imageTypeSupportsHDR:(id)a0;
- (void)releaseCGContext:(struct CGContext { } *)a0;
- (void)releaseSDRCGContext:(struct CGContext { } *)a0 andHDRContext:(struct CGContext { } *)a1;
- (char)supportsPaging;
- (char)supportsRenderingQuality;

@end
