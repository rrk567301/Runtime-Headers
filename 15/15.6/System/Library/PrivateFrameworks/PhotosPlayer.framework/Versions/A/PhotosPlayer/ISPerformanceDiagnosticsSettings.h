@interface ISPerformanceDiagnosticsSettings : ISSettings

@property (nonatomic) char shouldTracePerformance;

+ (id)sharedInstance;

- (void)setDefaultValues;

@end
