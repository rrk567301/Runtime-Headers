@class NSString;

@interface FcuSessionObserver : NSObject <FigCaptureSessionObserver>

@property BOOL anySessionsStarted;
@property (readonly) int photoThumbnailMaxDimension;
@property (readonly) BOOL photoThumbnailQualitySpecified;
@property (readonly) float photoThumbnailQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)captureSession:(long long)a0 didCapturePhotoWithStatus:(int)a1 thumbnailData:(id)a2 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)captureSessionDidFinishMovieRecording:(long long)a0;
- (void)captureSessionDidReconfigureWhileRunning:(id)a0;
- (void)captureSessionDidStart:(id)a0;
- (void)captureSessionDidStartMovieRecording:(long long)a0;
- (void)captureSessionDidStop:(long long)a0;
- (void)captureSessionWillStart:(id)a0;

@end
