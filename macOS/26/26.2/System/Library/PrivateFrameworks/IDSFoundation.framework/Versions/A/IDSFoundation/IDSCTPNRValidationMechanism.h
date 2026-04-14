@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *context;

+ (id)RCSTokenMechanismWithContext:(id)a0;
+ (id)SMSMechanismWithContext:(id)a0;
+ (id)SMSLessMechanism;
+ (id)mechanismStringForMechanism:(long long)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)a0 context:(id)a1;

@end
