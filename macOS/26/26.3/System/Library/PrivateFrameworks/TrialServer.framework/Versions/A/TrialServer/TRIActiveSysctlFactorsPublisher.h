@protocol TRISysctlWriting, TRIActiveSysctlFactorsProviding;

@interface TRIActiveSysctlFactorsPublisher : NSObject {
    id<TRIActiveSysctlFactorsProviding> _factorsProvider;
    id<TRISysctlWriting> _sysctlWriter;
}

- (void).cxx_destruct;
- (id)initWithServerContext:(id)a0;
- (id)initWithSysctlFactorsProvider:(id)a0 sysctlWriter:(id)a1;
- (BOOL)publishSysctlFactors;

@end
