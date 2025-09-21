@class AVTimer;
@protocol AVTimeControlling;

@interface AVPlayerControllerTimeResolver : NSObject {
    id<AVTimeControlling> _playerController;
    double _interval;
    double _resolution;
    double _currentTime;
    AVTimer *_timer;
}

@property double targetTime;
@property double targetTimeWithinEndTimes;
@property (readonly) double remainingTargetTimeWithinEndTimes;
@property double currentTimeWithinEndTimes;
@property (readonly) double remainingTime;
@property (readonly) double remainingTimeWithinEndTimes;
@property (readonly) double seekableTimeRangeDuration;
@property (readonly, getter=isCurrentTimeAtEndOfSeekableTimeRanges) BOOL currentTimeAtEndOfSeekableTimeRanges;
@property double minTime;
@property double maxTime;
@property (retain) id<AVTimeControlling> playerController;
@property double interval;
@property double resolution;
@property double currentTime;

+ (id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingSeekableTimeRangeDuration;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingTargetTime;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (BOOL)automaticallyNotifiesObserversOfCurrentTime;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
