@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger

@property (copy, nonatomic) CLCircularRegion *region;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

+ (char)supportsSecureCoding;
+ (id)timestampDateFormatter;
+ (char)isAllowedToRunAutomatically;
+ (char)requiresNotification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isDateWithinTimeRange:(id)a0;
- (char)hasValidConfiguration;

@end
