@class PHImageRequest, NSProgress, PHLivePhotoRequestOptions, PHLivePhotoResult, PHVideoRequest;

@interface PHLivePhotoRequestContext : PHMediaRequestContext {
    NSProgress *_imageProgress;
    NSProgress *_videoProgress;
    PHLivePhotoResult *_livePhotoResult;
    PHImageRequest *_fastImageRequest;
    PHImageRequest *_highQualityImageRequest;
    PHVideoRequest *_videoRequest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _imagePartCompleted;
    char _videoPartCompleted;
    char _includeImage;
}

@property (readonly, nonatomic) PHLivePhotoRequestOptions *livePhotoOptions;

- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (id /* block */)progressHandler;
- (char)isNetworkAccessAllowed;
- (id)initialRequests;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (char)_shouldRequestVideo;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(char)a1 isDegraded:(char)a2 result:(id)a3;
- (id)progresses;
- (char)representsShareableHighQualityResource;
- (char)shouldReportProgress;

@end
