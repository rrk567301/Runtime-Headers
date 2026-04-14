@class NSTimer, NSMutableDictionary, IMDTrustKitDecisioningManager;

@interface IMDSpamCheckRequeryTracker : NSObject

@property (readonly, nonatomic) NSMutableDictionary *trackedRecords;
@property (retain, nonatomic) NSTimer *updateTimer;
@property (nonatomic) double updateTimeInterval;
@property (nonatomic) double timerTimeout;
@property (retain, nonatomic) IMDTrustKitDecisioningManager *decisioningManager;

+ (id)sharedTracker;

- (void)dealloc;
- (id)init;
- (void)_updateRecord:(id)a0;
- (void)_startTimer;
- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_updateTracker;
- (id)initWithInterval:(double)a0 timeout:(double)a1;
- (void)startTrackingMessageGUID:(id)a0 chat:(id)a1;
- (void)startTrackingRecord:(id)a0;
- (void)stopTrackingRecord:(id)a0;

@end
