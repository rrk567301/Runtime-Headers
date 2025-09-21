@protocol RTManagedConfigurationObserver;

@interface RTManagedConfiguration : NSObject

@property (weak, nonatomic) id<RTManagedConfigurationObserver> delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void).cxx_destruct;
- (char)effectiveBoolValueForSetting:(id)a0;
- (char)isDiagnosticsAndUsageAllowed;
- (char)isFindMyCarAllowed;
- (char)isHealthDataSubmissionAllowed;

@end
