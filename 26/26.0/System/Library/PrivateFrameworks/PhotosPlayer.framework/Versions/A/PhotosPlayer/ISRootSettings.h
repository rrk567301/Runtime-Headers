@class ISPerformanceDiagnosticsSettings, ISPlayerSettings, ISVitalitySettings;

@interface ISRootSettings : ISSettings

@property (retain, nonatomic) ISPlayerSettings *playerSettings;
@property (retain, nonatomic) ISVitalitySettings *vitalitySettings;
@property (retain, nonatomic) ISPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (void)save;
- (BOOL)suppressesIntrospectionOnCustomerInstalls;
- (void)createChildren;
- (void).cxx_destruct;

@end
