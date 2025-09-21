@class NSProgress, PHVideoRequestOptions;

@interface PHVideoRequestContext : PHMediaRequestContext {
    NSProgress *_progress;
}

@property (readonly, nonatomic) PHVideoRequestOptions *videoOptions;
@property (readonly, nonatomic) long long intent;

- (void).cxx_destruct;
- (long long)type;
- (id /* block */)progressHandler;
- (char)isNetworkAccessAllowed;
- (id)initialRequests;
- (id)_lazyProgress;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 options:(id)a4 intent:(long long)a5 resultHandler:(id /* block */)a6;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)progresses;
- (char)representsShareableHighQualityResource;

@end
