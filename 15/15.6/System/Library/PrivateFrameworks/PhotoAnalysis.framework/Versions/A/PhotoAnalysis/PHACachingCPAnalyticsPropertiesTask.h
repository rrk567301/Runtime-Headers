@class NSString;

@interface PHACachingCPAnalyticsPropertiesTask : NSObject <PHAPhotoLibraryTask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) char featureAvailable;
@property (readonly, nonatomic) char featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ageRangeDescriptionFromBirthday:(id)a0;
+ (id)_fetchDemographicsSummaryWithLoggingConnection:(id)a0;
+ (id)_fetchLibrarySummaryForPhotoLibrary:(id)a0 loggingConnection:(id)a1 progressReporter:(id)a2;
+ (id)_genderDescriptionFromGivenName:(id)a0;
+ (char)_hasAppleMusicSubscriptionWithLoggingConnection:(id)a0;
+ (id)_meContactWithLoggingConnection:(id)a0;

- (int)priority;
- (id)_buildPropertyCacheForPhotoLibrary:(id)a0 loggingConnection:(id)a1 progressReporter:(id)a2;
- (char)currentPlatformIsSupported;
- (id)incrementalKey;
- (char)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (char)runWithPhotoLibrary:(id)a0 analytics:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (char)shouldRunWithGraphManager:(id)a0;
- (char)shouldRunWithPhotoLibrary:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(char)a0;

@end
