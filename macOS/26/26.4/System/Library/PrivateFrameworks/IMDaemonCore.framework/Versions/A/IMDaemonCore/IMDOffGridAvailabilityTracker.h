@class NSTimer, NSMutableDictionary;

@interface IMDOffGridAvailabilityTracker : NSObject

@property (class, readonly, nonatomic) IMDOffGridAvailabilityTracker *sharedTracker;

@property (readonly, nonatomic) NSMutableDictionary *trackedHandles;
@property (retain, nonatomic) NSTimer *updateTimer;

- (void)_startTimer;
- (void).cxx_destruct;
- (id)init;
- (void)_clearTimer;
- (void)dealloc;
- (void)_updateTracker;
- (void)startTrackingHandle:(id)a0;
- (void)stopTrackingHandle:(id)a0;

@end
