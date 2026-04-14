@class CSUDetectionPrintNetworkConfiguration;

@interface CSUDetectionPrintNetwork : NSObject {
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { struct EspressoNet *__ptr_; } _net;
    struct unique_ptr<ik::PixelBufferTransfer, std::default_delete<ik::PixelBufferTransfer>> { struct PixelBufferTransfer *__ptr_; } _transferSession;
}

@property (readonly, nonatomic) CSUDetectionPrintNetworkConfiguration *configuration;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadResourcesAndReturnError:(id *)a0;
- (void)runOnInputImage:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (void)_unsafeRunOnInputImage:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (BOOL)resampleImage:(struct __CVBuffer { } *)a0 intoInputImage:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
