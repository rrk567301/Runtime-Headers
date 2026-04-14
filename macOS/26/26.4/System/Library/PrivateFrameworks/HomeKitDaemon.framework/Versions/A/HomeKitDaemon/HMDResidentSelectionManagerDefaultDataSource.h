@class NSString, NSBackgroundActivityScheduler, NSNotificationCenter, HMDHomeKitVersion;
@protocol HMDFeaturesDataSource;

@interface HMDResidentSelectionManagerDefaultDataSource : NSObject <HMDResidentSelectionManagerDataSource>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSBackgroundActivityScheduler *autoModeEvaluationScheduler;
@property (readonly) HMDHomeKitVersion *minimumHomeKitVersionForResidentSelection;
@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
