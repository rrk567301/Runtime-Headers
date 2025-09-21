@interface FUFlightPageController : NSPageController

@property char canSwipe;

- (void)scrollWheel:(id)a0;
- (char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;

@end
