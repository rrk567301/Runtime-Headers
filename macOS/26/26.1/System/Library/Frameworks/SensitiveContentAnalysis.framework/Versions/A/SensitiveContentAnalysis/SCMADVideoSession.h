@class MADVideoSession;

@interface SCMADVideoSession : NSObject

@property (class, readonly) BOOL ttrFrameCollectionEnabled;

@property (readonly, nonatomic) MADVideoSession *session;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)processPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(unsigned int)a2 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 resultHandler:(id /* block */)a4;
- (void)requestTTRNotificationWithVideoFrames:(id)a0 streamID:(id)a1 startDate:(id)a2 completionHandler:(id /* block */)a3;

@end
