@class MKLookAroundView, NSString, NSClickGestureRecognizer, NSMagnificationGestureRecognizer, NSDate, VKCompoundAnimation, NSPanGestureRecognizer;
@protocol MKLookAroundGestureControllerDelegate;

@interface MKLookAroundGestureController : NSObject <NSGestureRecognizerDelegate> {
    long long _userInteractionCount;
    NSClickGestureRecognizer *_singleNavigateGestureRecognizer;
    NSPanGestureRecognizer *_panGestureRecognizer;
    NSMagnificationGestureRecognizer *_zoomGestureRecognizer;
    NSDate *_singleTapTime;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    long long _lastZoomDirection;
    double _startZoomScale;
    double _lastZoomScale;
    char _readyToReplayTap;
}

@property (weak, nonatomic) MKLookAroundView *lookAroundView;
@property (weak, nonatomic) id<MKLookAroundGestureControllerDelegate> delegate;
@property (nonatomic) char navigatingEnabled;
@property (nonatomic) char panningEnabled;
@property (nonatomic) char zoomingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handlePan:(id)a0;
- (char)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleSingleNavigate:(id)a0;
- (void)_handleZoom:(id)a0;
- (void)_moveBackToReplayTap;
- (id)initWithLookAroundView:(id)a0;

@end
