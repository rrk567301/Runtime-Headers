@class PHImageRequest, NSProgress, PHLivePhotoRequestOptions, PHLivePhotoResult, PHVideoRequest;

@interface PHLivePhotoRequestContext : PHMediaRequestContext {
    NSProgress *_imageProgress;
    NSProgress *_videoProgress;
    PHLivePhotoResult *_livePhotoResult;
    PHImageRequest *_fastImageRequest;
    PHImageRequest *_highQualityImageRequest;
    PHVideoRequest *_videoRequest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _imagePartCompleted;
    BOOL _videoPartCompleted;
    BOOL _includeImage;
}

@property (readonly, nonatomic) PHLivePhotoRequestOptions *livePhotoOptions;

- (id /* block */)progressHandler;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (long long)type;
- (BOOL)representsShareableHighQualityResource;
- (id)init;
- (id)progresses;
- (id)initialRequests;
- (BOOL)shouldReportProgress;
- (BOOL)isNetworkAccessAllowed;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (void).cxx_destruct;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (BOOL)_shouldRequestVideo;

@end
