@class NSDictionary, NSString;

@interface BUIPowerSource : NSObject {
    NSDictionary *_psDescriptionDictionary;
    BOOL _isUPS;
    BOOL _isUPSDetermined;
    double _percentRemaining;
    BOOL _percentRemainingDetermined;
    BOOL _isPluggedIn;
    BOOL _isPluggedInDetermined;
    NSString *_timeLeftString;
    BOOL _timeLeftStringDetermined;
    long long _timeLeft;
    double _baselineCapacity;
}

+ (id)powerSourceWithIOPSDictionary:(id)a0;

- (id)name;
- (id)description;
- (void).cxx_destruct;
- (long long)maxCapacity;
- (BOOL)isInternal;
- (BOOL)isCharging;
- (BOOL)isPluggedIn;
- (BOOL)isPresent;
- (id)initWithIOPSDictionary:(id)a0;
- (BOOL)isUPS;
- (BOOL)isFinishingCharge;
- (long long)currentCapacity;
- (double)relativeCapacity;
- (void)setBaselineCapacity:(double)a0;
- (double)percentRemaining;
- (long long)_timeForKey:(id)a0 timeIsValid:(BOOL *)a1;
- (long long)_timeToFull:(BOOL *)a0;
- (long long)_timeToEmpty:(BOOL *)a0;
- (BOOL)isCharged;
- (long long)minutesLeft:(BOOL *)a0;
- (BOOL)isCalculatingTime;
- (BOOL)isInPoorCondition;
- (BOOL)isInCheckBatteryCondition;
- (BOOL)isInFairCondition;
- (BOOL)isInGoodCondition;
- (id)nameAsAttributedString;
- (unsigned long long)idealNameWidth;

@end
