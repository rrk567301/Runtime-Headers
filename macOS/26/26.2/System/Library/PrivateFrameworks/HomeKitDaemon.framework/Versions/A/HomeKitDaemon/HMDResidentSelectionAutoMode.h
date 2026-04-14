@interface HMDResidentSelectionAutoMode : HMDResidentSelectionMode

+ (id)logCategory;

- (id)shortDescription;
- (id)logIdentifier;
- (id)initWithContext:(id)a0;
- (unsigned long long)currentModeType;
- (void)performSelectionWithPreferredPrimaryResident:(id)a0 requireAutoUpdate:(BOOL)a1 reason:(unsigned long long)a2 completion:(id /* block */)a3;

@end
