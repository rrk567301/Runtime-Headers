@class NSDate;

@interface RTMotionActivityPedometerEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long eventType;

+ (long long)convertCMPedometerEventType:(long long)a0;
+ (id)convertRTMotionActivityPedometerEventTypeToString:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCMPedometerEvent:(id)a0;
- (id)initWithDate:(id)a0 eventType:(long long)a1;

@end
