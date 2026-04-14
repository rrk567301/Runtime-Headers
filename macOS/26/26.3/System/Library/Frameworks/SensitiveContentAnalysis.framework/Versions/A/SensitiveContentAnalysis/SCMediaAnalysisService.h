@class SCAnalytics, MADService;

@interface SCMediaAnalysisService : NSObject {
    _Atomic BOOL _usedService;
}

@property (retain, nonatomic) MADService *service;
@property (retain, nonatomic) SCAnalytics *analytics;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)isSensitiveVideoFile:(id)a0 options:(unsigned long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)_newImageClassificationRequest;
- (id)_newVideoClassificationRequest;
- (id)_processMADResults:(id *)a0 requestID:(int)a1 error:(id)a2 request:(id)a3;
- (id)_processMADResults:(id *)a0 requestID:(int)a1 error:(id)a2 videoRequest:(id)a3;
- (id)initWithMADService:(id)a0;
- (void)isSensitiveCGImage:(struct CGImage { } *)a0 withOrientation:(unsigned int)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)isSensitiveImage:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)isSensitiveImageWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)isSensitivePixelBuffer:(struct __CVBuffer { } *)a0 withOrientation:(unsigned int)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)isSensitiveVideoWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 options:(unsigned long long)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)obtainCurrentPolicy;

@end
