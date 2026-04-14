@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *context;

+ (id)RCSTokenMechanismWithContext:(id)a0;
+ (id)SMSLessMechanism;
+ (id)SMSMechanismWithContext:(id)a0;
+ (id)mechanismStringForMechanism:(long long)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 context:(id)a1;

@end
