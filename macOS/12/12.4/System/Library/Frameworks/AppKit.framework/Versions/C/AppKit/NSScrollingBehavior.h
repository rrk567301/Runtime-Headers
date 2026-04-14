@interface NSScrollingBehavior : NSObject

- (id)scrollView:(id)a0 responderToForwardMayBeginScrollEvent:(id)a1;
- (id)scrollView:(id)a0 responderToForwardScrollEvents:(id)a1;
- (void)scrollView:(id)a0 endScrollGestureDueToReason:(id)a1;
- (void)scrollView:(id)a0 scrollWheelWithEvent:(id)a1;
- (void)scrollView:(id)a0 boundsChangedForClipView:(id)a1;
- (void)automateLiveScrollOfScrollView:(id)a0;
- (void)scrollView:(id)a0 panWithGestureRecognizer:(id)a1;
- (BOOL)scrollView:(id)a0 panGestureRecognizer:(id)a1 shouldReceiveTouch:(id)a2;
- (void)scrollView:(id)a0 panGestureRecognizerFailed:(id)a1;
- (BOOL)supportsConcurrentScrolling;
- (long long)axisForSwipeTrackingGivenScrollWheelEvent:(id)a0;
- (void)snapRubberBandOfScrollView:(id)a0;

@end
