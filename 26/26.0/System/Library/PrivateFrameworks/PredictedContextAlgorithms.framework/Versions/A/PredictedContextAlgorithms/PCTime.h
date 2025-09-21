@class NSUUID, NSString;

@interface PCTime : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) double timestamp;
@property (readonly, retain, nonatomic) NSString *timeString;
@property (readonly, retain, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) unsigned long long timeTag;
@property (nonatomic) unsigned long long dateReferenceTag;

+ (id)dayOfWeekFromDate:(id)a0;
+ (id)buildSimpleMealTagIntervalsForDate:(id)a0;
+ (id)buildSimpleTimeTagIntervalsForDate:(id)a0;
+ (id)buildTimeTagIntervalsForDate:(id)a0;
+ (id)dateFromDate:(id)a0 hour:(long long)a1;
+ (unsigned long long)dateReferenceTagFromStartDate:(id)a0 endDate:(id)a1;
+ (unsigned long long)dateReferenceTagFromStartDate:(id)a0 endDate:(id)a1 nowDate:(id)a2 timeZone:(id)a3;
+ (unsigned long long)dateReferenceTagFromStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;
+ (id)dayOfWeekFromStartDate:(id)a0 endDate:(id)a1 timeZoneManager:(id)a2;
+ (unsigned long long)dayOfWeekTagFromDate:(id)a0;
+ (unsigned long long)dayOfWeekTagFromStartDate:(id)a0 endDate:(id)a1;
+ (id)localTimeOfDate:(id)a0 timeZone:(id)a1;
+ (id)localizedDateStringFromDate:(id)a0;
+ (unsigned long long)mealtagFromStartDate:(id)a0 endDate:(id)a1;
+ (unsigned long long)simpleTimetagFromStartDate:(id)a0 endDate:(id)a1;
+ (id)timeForDate:(id)a0;
+ (id)timeForDate:(id)a0 timeZoneManager:(id)a1;
+ (id)timeFromStartDate:(id)a0 endDate:(id)a1;
+ (id)timeFromStartDate:(id)a0 endDate:(id)a1 timeZoneManager:(id)a2;
+ (id)timeOfDayPrefixFromDate:(id)a0;
+ (id)timeOfDayPrefixFromStartDate:(id)a0 endDate:(id)a1;
+ (id)timeStringFromTimeTag:(unsigned long long)a0;
+ (unsigned long long)timeTagFromTimeOfDayCos:(double)a0 timeOfDaySin:(double)a1;
+ (unsigned long long)timetagFromStartDate:(id)a0 endDate:(id)a1;
+ (unsigned long long)typeOfDayTagFromStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2;

- (id)date;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)localTime;
- (id)initWithIdentifier:(id)a0 timestamp:(double)a1 timeString:(id)a2 timeZone:(id)a3 timeTag:(unsigned long long)a4;
- (id)initWithTimestamp:(double)a0 timeString:(id)a1 timeZone:(id)a2 timeTag:(unsigned long long)a3;
- (id)timeZoneObject;

@end
