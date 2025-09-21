@interface CHManagedConfigurations : NSObject

@property (readonly, nonatomic) char isPersonalizedHandwritingResultsAllowed;

+ (id)managedConfigurations;

- (id)init;
- (void)_updateSettings;
- (void)_profileSettingsChanged:(id)a0;

@end
