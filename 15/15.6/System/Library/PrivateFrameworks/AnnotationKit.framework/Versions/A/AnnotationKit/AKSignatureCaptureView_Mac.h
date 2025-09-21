@class CALayer, AVCaptureVideoPreviewLayer;

@interface AKSignatureCaptureView_Mac : NSView {
    AVCaptureVideoPreviewLayer *_captureLayer;
    CALayer *_frostingLayer;
    char _frostingLayerShouldBeVisible;
    char _shouldBeMirrored;
}

@property (nonatomic) char mirrored;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)captureSession;
- (void)setCaptureSession:(id)a0;
- (void)_setupLayersWithSession:(id)a0;
- (void)setFrostingLayerVisible:(char)a0;

@end
