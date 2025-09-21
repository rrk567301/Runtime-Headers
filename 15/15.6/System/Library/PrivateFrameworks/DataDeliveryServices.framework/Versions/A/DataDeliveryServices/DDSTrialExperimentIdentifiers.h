@interface DDSTrialExperimentIdentifiers : TRIExperimentIdentifiers <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(int)a2;

@end
