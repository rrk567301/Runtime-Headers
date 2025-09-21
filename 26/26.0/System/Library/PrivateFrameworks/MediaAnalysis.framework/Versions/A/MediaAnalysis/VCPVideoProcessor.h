@class VCPVideoSyncFrameDecoder, NSDictionary, NSURL, MADAVAssetResourceLoaderDelegate, NSObject, VCPVideoProcessorSession;
@protocol OS_dispatch_queue;

@interface VCPVideoProcessor : NSObject <VCPBlockBasedVideoProcessorProtocol> {
    NSURL *_url;
    VCPVideoProcessorSession *_session;
    NSDictionary *_decoderSettings;
    BOOL _requiresSyncFrameDetectionFromNalUnit;
    VCPVideoSyncFrameDecoder *_syncFrameDecoder;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    MADAVAssetResourceLoaderDelegate *_resourceLoaderDelegate;
    NSObject<OS_dispatch_queue> *_resourceLoaderDelegateQueue;
}

@property (readonly, nonatomic) double videoDuration;
@property (copy) id /* block */ progressHandler;
@property (retain, nonatomic) NSDictionary *decoderSettings;

+ (id)urlAssetOptions;

- (void)cancel;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withConfiguration:(id)a1 error:(id *)a2;
- (BOOL)analyzeWithStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (BOOL)removeRequest:(id)a0 error:(id *)a1;
- (BOOL)_analyzeWithStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (BOOL)addFrameProcessingRequest:(id /* block */)a0 withConfiguration:(id)a1 error:(id *)a2;
- (BOOL)analyzeWithError:(id *)a0;

@end
