@class NSData;

@interface LACEnvironmentMechanismBiometry : LACEnvironmentMechanism

@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) char enrolled;
@property (readonly, nonatomic) char lockedOut;
@property (readonly, nonatomic) NSData *stateHash;
@property (readonly, nonatomic) char sensorInaccessible;
@property (readonly, nonatomic) long long approvalState;

+ (char)supportsSecureCoding;
+ (id)environmentMechanismForUser:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; })a1 dependencies:(id)a2 error:(id *)a3;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDetails;
- (id)initWithAvailabilityError:(id)a0 biometryType:(long long)a1 enrolled:(char)a2 lockedOut:(char)a3 stateHash:(id)a4 sensorInaccessible:(char)a5 approvalState:(long long)a6;

@end
