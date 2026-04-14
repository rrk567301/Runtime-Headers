@interface CIMMockPreferences : CIMPreferences

+ (id)sharedUserDefaults;

- (void)synchronize;
- (void)logStatistics;
- (BOOL)ubiquityEnabled;
- (void)enableUbiquity;
- (void)disableUbiquity;

@end
