@class NSDictionary;

@interface REMUrgentPresentationAlarm : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *urgentAlarmStateByAccountIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUrgentAlarmStateByAccountIdentifier:(id)a0;
- (id)initWithUrgentAlarmStates:(id)a0;
- (id)mergingWith:(id)a0;
- (id)mergingWithState:(id)a0;

@end
