@interface CIMMockPreferences : CIMPreferences

+ (id)sharedUserDefaults;

- (void)synchronize;
- (void)disableUbiquity;
- (BOOL)ubiquityEnabled;
- (void)enableUbiquity;
- (void)logStatistics;

@end
