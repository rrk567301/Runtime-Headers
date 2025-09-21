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
    BOOL _readyToReplayTap;
}

@property (weak, nonatomic) MKLookAroundView *lookAroundView;
@property (weak, nonatomic) id<MKLookAroundGestureControllerDelegate> delegate;
@property (nonatomic) BOOL navigatingEnabled;
@property (nonatomic) BOOL panningEnabled;
@property (nonatomic) BOOL zoomingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handlePan:(id)a0;
- (void).cxx_destruct;
- (void)_handleSingleNavigate:(id)a0;
- (void)_handleZoom:(id)a0;
- (void)_moveBackToReplayTap;
- (id)initWithLookAroundView:(id)a0;

@end
