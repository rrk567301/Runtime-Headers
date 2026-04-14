@interface CIMMockPreferences : CIMPreferences

+ (id)sharedUserDefaults;

- (void)synchronize;
- (void)logStatistics;
- (void)enableUbiquity;
- (void)disableUbiquity;
- (BOOL)ubiquityEnabled;

@end
