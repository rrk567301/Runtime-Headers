@class CRKIDSLocalSimulationConfiguration;

@interface CRKSimulateRequest : CATTaskRequest

@property (retain, nonatomic) CRKIDSLocalSimulationConfiguration *IDSLocalConfiguration;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
