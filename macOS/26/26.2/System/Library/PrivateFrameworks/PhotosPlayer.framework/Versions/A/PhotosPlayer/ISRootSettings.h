@class ISPerformanceDiagnosticsSettings, ISPlayerSettings, ISVitalitySettings;

@interface ISRootSettings : ISSettings

@property (retain, nonatomic) ISPlayerSettings *playerSettings;
@property (retain, nonatomic) ISVitalitySettings *vitalitySettings;
@property (retain, nonatomic) ISPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;

+ (id)sharedInstance;

- (void)save;
- (void).cxx_destruct;
- (void)setDefaultValues;
- (void)createChildren;
- (BOOL)suppressesIntrospectionOnCustomerInstalls;

@end
