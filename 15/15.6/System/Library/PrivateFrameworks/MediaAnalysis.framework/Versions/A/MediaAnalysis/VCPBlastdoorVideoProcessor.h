@class NSDictionary, NSURL, NSMutableArray;

@interface VCPBlastdoorVideoProcessor : NSObject <VCPBlockBasedVideoProcessorProtocol> {
    NSURL *_url;
    NSMutableArray *_frameProcessors;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _stopProcessing;
}

@property (retain, nonatomic) NSDictionary *decoderSettings;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)cancel;
- (char)processConfiguration:(id)a0 withError:(id *)a1;
- (char)addFrameProcessingRequest:(id /* block */)a0 withConfiguration:(id)a1 error:(id *)a2;
- (char)analyzeWithError:(id *)a0;

@end
