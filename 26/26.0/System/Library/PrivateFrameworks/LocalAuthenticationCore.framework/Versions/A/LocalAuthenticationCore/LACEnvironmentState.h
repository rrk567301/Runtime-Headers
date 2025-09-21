@class NSArray, LACEnvironmentMechanismBiometry, LACEnvironmentMechanismUserPassword;

@interface LACEnvironmentState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) LACEnvironmentMechanismBiometry *biometry;
@property (retain, nonatomic) LACEnvironmentMechanismUserPassword *userPassword;
@property (retain, nonatomic) NSArray *companions;

+ (id)companionsForUser:(unsigned int)a0;
+ (id)environmentStateForUser:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; })a1 dependencies:(id)a2 error:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBiometry:(id)a0 userPassword:(id)a1 companions:(id)a2;

@end
