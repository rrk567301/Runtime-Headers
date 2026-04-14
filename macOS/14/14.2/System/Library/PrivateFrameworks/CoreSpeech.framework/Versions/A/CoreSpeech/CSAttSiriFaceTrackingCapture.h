@protocol CSAttSiriFaceTrackingCaptureDelegate;

@interface CSAttSiriFaceTrackingCapture : NSObject

@property (weak, nonatomic) id<CSAttSiriFaceTrackingCaptureDelegate> delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)startFaceTracking;
- (void)stopFaceTracking;

@end
