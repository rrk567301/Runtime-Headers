@class NSDateComponents, NSDateInterval;

@interface USDeviceActivitySchedule : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSDateComponents *intervalStart;
@property (readonly, copy) NSDateComponents *intervalEnd;
@property (readonly) char repeats;
@property (readonly, copy) NSDateComponents *warningTime;
@property (readonly, copy) NSDateInterval *nextInterval;

+ (id)nextIntervalForStartComponents:(id)a0 endComponents:(id)a1;
+ (id)nextWarningDateForComponents:(id)a0 referenceDate:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntervalStart:(id)a0 intervalEnd:(id)a1 repeats:(char)a2 warningTime:(id)a3;

@end
