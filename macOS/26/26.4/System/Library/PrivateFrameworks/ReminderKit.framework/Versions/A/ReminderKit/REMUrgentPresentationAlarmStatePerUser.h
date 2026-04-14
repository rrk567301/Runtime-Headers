@class NSString, NSDate;

@interface REMUrgentPresentationAlarmStatePerUser : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *personIdentifier;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSDate *modifiedOn;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPersonIdentifier:(id)a0 isEnabled:(BOOL)a1 modifiedOn:(id)a2;

@end
