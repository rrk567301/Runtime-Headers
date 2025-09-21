@class NSUUID, NSDate;

@interface ATXDuetEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSUUID *locationIdentifier;

+ (long long)_secondsInDayFromDate:(id)a0 calendar:(id)a1;

- (id)identifier;
- (void)setEndDate:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithCurrentContextStoreValues;
- (long long)compare:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)endDateSecondsAfterMidnight;
- (id)initWithATXEvent:(id)a0;
- (BOOL)isEndDateOnWeekday;
- (BOOL)isStartDateOnWeekday;
- (id)locationIdentifierUUIDString;
- (long long)startDateSecondsAfterMidnight;
- (void)tagWithLocationOfInterestIdentifier:(id)a0;

@end
