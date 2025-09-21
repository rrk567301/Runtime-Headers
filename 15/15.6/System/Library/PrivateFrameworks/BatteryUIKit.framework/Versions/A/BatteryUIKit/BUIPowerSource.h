@class NSDictionary, NSString;

@interface BUIPowerSource : NSObject {
    NSDictionary *_psDescriptionDictionary;
    char _isUPS;
    char _isUPSDetermined;
    double _percentRemaining;
    char _percentRemainingDetermined;
    char _isPluggedIn;
    char _isPluggedInDetermined;
    NSString *_timeLeftString;
    char _timeLeftStringDetermined;
    long long _timeLeft;
    double _baselineCapacity;
}

+ (id)powerSourceWithIOPSDictionary:(id)a0;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (long long)maxCapacity;
- (char)isInternal;
- (char)isCharging;
- (char)isPluggedIn;
- (char)isPresent;
- (long long)currentCapacity;
- (long long)_timeForKey:(id)a0 timeIsValid:(char *)a1;
- (long long)_timeToEmpty:(char *)a0;
- (long long)_timeToFull:(char *)a0;
- (unsigned long long)idealNameWidth;
- (id)initWithIOPSDictionary:(id)a0;
- (char)isCalculatingTime;
- (char)isCharged;
- (char)isFinishingCharge;
- (char)isInCheckBatteryCondition;
- (char)isInFairCondition;
- (char)isInGoodCondition;
- (char)isInPoorCondition;
- (char)isUPS;
- (long long)minutesLeft:(char *)a0;
- (id)nameAsAttributedString;
- (double)percentRemaining;
- (double)relativeCapacity;
- (void)setBaselineCapacity:(double)a0;

@end
