@class PHVideoRequestBehaviorSpec, PHVideoResult, PLProgressFollower, PHImageDisplaySpec;
@protocol PHMediaRequestDelegate;

@interface PHVideoRequest : PHMediaRequest {
    PHVideoResult *_videoResult;
    PLProgressFollower *_progressFollower;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<PHMediaRequestDelegate> delegate;
@property (readonly, nonatomic) PHImageDisplaySpec *displaySpec;
@property (readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isSynchronous;
- (void)startRequest;
- (void)_finish;
- (BOOL)isNetworkAccessAllowed;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 displaySpec:(id)a5 behaviorSpec:(id)a6 delegate:(id)a7;
- (void)_handleResultVideoURL:(id)a0 mediaItemMakerData:(id)a1 info:(id)a2 error:(id)a3;

@end
