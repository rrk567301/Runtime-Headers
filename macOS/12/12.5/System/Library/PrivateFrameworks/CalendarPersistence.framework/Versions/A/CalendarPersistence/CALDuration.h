@interface CALDuration : NSObject <NSSecureCoding> {
    double _duration;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)durationWithSeconds:(int)a0;
+ (id)durationWithDays:(int)a0;
+ (id)durationWithHours:(int)a0;
+ (id)durationWithMinutes:(int)a0;
+ (id)durationWithDays:(int)a0 hours:(int)a1;
+ (id)durationWithDays:(int)a0 hours:(int)a1 minutes:(int)a2;
+ (id)durationWithDays:(int)a0 hours:(int)a1 minutes:(int)a2 seconds:(int)a3;
+ (id)durationWithDurationRoundedToDay:(id)a0;
+ (id)durationWithDurationWithoutDayPart:(id)a0;
+ (id)durationWithRawInterval:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (void)inverse;
- (BOOL)isNegative;
- (double)rawInterval;
- (int)daysPart;
- (int)hoursPart;
- (int)minutesPart;
- (int)secondsPart;
- (id)initWithDays:(int)a0 hours:(int)a1 minutes:(int)a2 seconds:(int)a3;
- (id)initWithDurationRoundedToDay:(id)a0;
- (id)initWithDurationWithoutDayPart:(id)a0;
- (id)initWithDays:(int)a0;
- (id)initWithRawInterval:(double)a0;
- (id)humanReadableDescriptionIncludeZero:(BOOL)a0;
- (id)humanReadableDescriptionIncludeZero:(BOOL)a0 abbreviate:(BOOL)a1;
- (id)humanReadableDescriptionIncludeZero:(BOOL)a0 abbreviate:(BOOL)a1 allDayEvent:(BOOL)a2 includeBeforeOrAfter:(BOOL)a3;
- (id)humanReadableDescriptionIncludeZero:(BOOL)a0 abbreviate:(BOOL)a1 allDayEvent:(BOOL)a2 includeBeforeOrAfter:(BOOL)a3 includeTravel:(BOOL)a4 includeAlert:(BOOL)a5;
- (id)initWithHours:(int)a0;
- (id)initWithMinutes:(int)a0;
- (id)initWithSeconds:(int)a0;
- (id)initWithDays:(int)a0 hours:(int)a1;
- (id)initWithDays:(int)a0 hours:(int)a1 minutes:(int)a2;
- (id)durationRoundedToDay;
- (void)setRawInterval:(double)a0;
- (BOOL)isLongerThan:(id)a0;
- (id)humanReadableDescription;
- (id)initWithISO8601String:(const char *)a0;

@end
