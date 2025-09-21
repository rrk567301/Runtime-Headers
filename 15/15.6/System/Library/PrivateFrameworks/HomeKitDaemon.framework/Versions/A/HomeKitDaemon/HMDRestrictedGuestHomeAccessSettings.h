@class NSArray, NSString, HMRestrictedGuestHomeAccessSchedule;

@interface HMDRestrictedGuestHomeAccessSettings : HMFObject <HMFLogging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) HMRestrictedGuestHomeAccessSchedule *schedule;
@property (readonly, copy, nonatomic) NSArray *uuidsOfAllowedAccessories;
@property (readonly, copy) NSArray *matterWeekDaySchedules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)__logIntervals:(id)a0;
+ (id)mergeIntervals:(id)a0;
+ (id)convertWeekDayRulesToDateIntervals:(id)a0 currentTime:(id)a1 timeZone:(id)a2;
+ (id)dateIntervalFromWeekDayRule:(id)a0 currentTime:(id)a1 timeZone:(id)a2;
+ (char)shouldConsiderStartDate:(id)a0 endDate:(id)a1 currentTime:(id)a2;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)_nextScheduledIntervalFromDate:(id)a0 timeZone:(id)a1;
- (id)initWithAllowedAccessories:(id)a0 schedule:(id)a1;
- (id)initWithRestrictedGuestHomeAccessSettings:(id)a0;
- (id)matterYearDaySchedulesWithTimeZone:(id)a0;
- (id)nextScheduledInterval;
- (void)setUuidsOfAllowedAccessories:(id)a0;
- (char)updateRestrictedGuestSettingsFromWorkingStore:(id)a0;

@end
