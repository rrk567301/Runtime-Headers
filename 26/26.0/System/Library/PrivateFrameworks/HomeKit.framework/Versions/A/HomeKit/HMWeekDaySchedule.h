@class NSArray, NSString;

@interface HMWeekDaySchedule : NSObject <HMFLogging, HMFObject>

@property (readonly, nonatomic) NSArray *scheduleRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithScheduleRules:(id)a0;

@end
