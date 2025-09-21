@class NSString, NSDateComponents, NSArray;

@interface HMWeekDayScheduleRule : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDateComponents *startTime;
@property (copy) NSDateComponents *endTime;
@property unsigned long long daysOfTheWeek;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidSchedule;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 daysOfTheWeek:(unsigned long long)a2;
- (BOOL)validTimes:(id)a0 endTime:(id)a1;

@end
