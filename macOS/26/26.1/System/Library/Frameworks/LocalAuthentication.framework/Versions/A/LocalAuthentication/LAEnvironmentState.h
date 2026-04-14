@class NSArray, LAEnvironmentMechanismBiometry, LACEnvironmentState, LAEnvironmentMechanismUserPassword;

@interface LAEnvironmentState : NSObject <NSCopying>

@property (readonly, nonatomic) LACEnvironmentState *coreState;
@property (readonly, nonatomic) LAEnvironmentMechanismBiometry *biometry;
@property (readonly, nonatomic) LAEnvironmentMechanismUserPassword *userPassword;
@property (readonly, nonatomic) NSArray *companions;
@property (readonly, nonatomic) NSArray *allMechanisms;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoreState:(id)a0;

@end
