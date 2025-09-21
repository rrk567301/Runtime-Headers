@class CSUImageCaptioningEncoderConfiguration;

@interface CSUImageCaptioningEncoder : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__ptr_; } _net;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { struct PixelBufferTransfer *__ptr_; } _transferSession;
}

@property (readonly, nonatomic) CSUImageCaptioningEncoderConfiguration *configuration;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadResources:(id *)a0;
- (id)computeEncodedCaptioningFeaturesForImage:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)resampleImage:(struct __CVBuffer { } *)a0 intoInputImage:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
