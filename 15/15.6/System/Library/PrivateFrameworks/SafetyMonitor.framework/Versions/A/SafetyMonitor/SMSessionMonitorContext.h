@class NSUUID, NSDate;

@interface SMSessionMonitorContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long updateReason;
@property (readonly, nonatomic) unsigned long long triggerCategory;
@property (readonly, nonatomic) NSDate *estimatedEndDate;
@property (readonly, nonatomic) NSDate *coarseEstimatedEndDate;
@property (readonly, nonatomic) NSUUID *sessionID;

+ (char)isValidAnomaly:(unsigned long long)a0;
+ (char)isDestinationTriggerCategory:(unsigned long long)a0;
+ (char)isDurationTriggerCategory:(unsigned long long)a0;
+ (char)isRoundTripTriggerCategory:(unsigned long long)a0;
+ (char)isSOSTriggerCategory:(unsigned long long)a0;
+ (char)isWorkoutTriggerCategory:(unsigned long long)a0;
+ (id)triggerCategoryToString:(unsigned long long)a0;
+ (id)userTriggerResponseToString:(long long)a0;
+ (id)sessionEndReasonToString:(unsigned long long)a0;
+ (id)sessionSafetyMonitorUpdateReasonToString:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithUpdateReason:(unsigned long long)a0 triggerCategory:(unsigned long long)a1 estimatedEndDate:(id)a2 coarseEstimatedEndDate:(id)a3 sessionID:(id)a4;
- (id)initWithUpdateReason:(unsigned long long)a0 triggerCategory:(unsigned long long)a1 sessionID:(id)a2;
- (id)outputToDictionary;

@end
