@class NSError, NSString;

@interface LACEnvironmentMechanism : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *availabilityError;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *iconSystemName;

+ (id)environmentMechanismForUser:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; })a1 dependencies:(id)a2 error:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptionDetails;
- (id)initWithAvailabilityError:(id)a0 localizedName:(id)a1 iconSystemName:(id)a2;

@end
