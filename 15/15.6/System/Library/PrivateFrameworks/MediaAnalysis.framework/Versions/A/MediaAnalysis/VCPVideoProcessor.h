@class VCPVideoSyncFrameDecoder, NSDictionary, NSURL, VCPVideoProcessorSession;

@interface VCPVideoProcessor : NSObject <VCPBlockBasedVideoProcessorProtocol> {
    NSURL *_url;
    VCPVideoProcessorSession *_session;
    NSDictionary *_decoderSettings;
    char _requiresSyncFrameDetectionFromNalUnit;
    VCPVideoSyncFrameDecoder *_syncFrameDecoder;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
}

@property (readonly, nonatomic) double videoDuration;
@property (copy) id /* block */ progressHandler;
@property (retain, nonatomic) NSDictionary *decoderSettings;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)cancel;
- (char)addRequest:(id)a0 withConfiguration:(id)a1 error:(id *)a2;
- (char)analyzeWithStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (char)removeRequest:(id)a0 error:(id *)a1;
- (char)_analyzeWithStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (char)addFrameProcessingRequest:(id /* block */)a0 withConfiguration:(id)a1 error:(id *)a2;
- (char)analyzeWithError:(id *)a0;

@end
