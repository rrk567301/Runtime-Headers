@interface CIMMockPreferences : CIMPreferences

+ (id)sharedUserDefaults;

- (void)synchronize;
- (void)logStatistics;
- (void)disableUbiquity;
- (char)ubiquityEnabled;
- (void)enableUbiquity;

@end
