@class NSString;

@interface PHAFeaturesUsageReportingTask : NSObject <PHAPhotoLibraryTask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) BOOL featureAvailable;
@property (readonly, nonatomic) BOOL featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldReportSettingsWithLoggingConnection:(id)a0;
+ (void)_reportAlchemistSettings:(id)a0;
+ (void)_reportSettings:(id)a0;
+ (void)_reportCameraSharingSettingsWithPhotoLibrary:(id)a0 andAnalytics:(id)a1;
+ (void)updateLastReportSettings;
+ (id)_dateFormatter;
+ (unsigned char)_valueForSetting:(struct __CFString { } *)a0 withDefaultValue:(unsigned char)a1;

- (id)_libraryScopedWorkerFeaturesUsageForLibrary:(id)a0 loggingConnection:(id)a1 error:(id *)a2;
- (int)priority;
- (id)_libraryScopedWorkerFeaturesUsageURLForPhotoLibrary:(id)a0;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)runWithPhotoLibrary:(id)a0 analytics:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (BOOL)recordFeatureUsageFromCounts:(id)a0 forPhotoLibrary:(id)a1 loggingConnection:(id)a2 error:(id *)a3;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)shouldRunWithPhotoLibrary:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (id)incrementalKey;

@end
