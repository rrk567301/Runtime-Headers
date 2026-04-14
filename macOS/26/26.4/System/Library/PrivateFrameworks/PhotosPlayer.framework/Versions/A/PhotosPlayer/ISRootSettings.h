@class ISPerformanceDiagnosticsSettings, ISPlayerSettings, ISVitalitySettings;

@interface ISRootSettings : ISSettings

@property (retain, nonatomic) ISPlayerSettings *playerSettings;
@property (retain, nonatomic) ISVitalitySettings *vitalitySettings;
@property (retain, nonatomic) ISPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (void)save;
- (void).cxx_destruct;
- (void)createChildren;
- (BOOL)suppressesIntrospectionOnCustomerInstalls;

@end
