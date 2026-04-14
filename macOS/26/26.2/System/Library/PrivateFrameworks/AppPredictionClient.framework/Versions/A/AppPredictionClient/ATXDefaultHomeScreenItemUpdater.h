@class NSSet, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_descriptors;
    NSDictionary *_descriptorInstallDates;
    NSUserDefaults *_userDefaults;
    id<ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;
}

@property (class, readonly, nonatomic) NSDictionary *assets;

+ (id)atxHomeScreenWidgetIdentifierFromATXWidget:(id)a0;
+ (id)atxHomeScreenStackConfigFromATXWidgetStack:(id)a0;

- (void)updateDefaultsDueToAmbientConfigUpdate;
- (void)_updateAllDefaultsOnQueueWithReason:(id)a0 updateCarPlayDefaults:(BOOL)a1;
- (void)_updateHomeScreenDefaultsOnQueueWithReason:(id)a0 appLaunchCounts:(id)a1;
- (id)_retrieveLastUpdateDate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateDefaultsWithSystemDescriptors:(id)a0 updateCarPlayDefaults:(BOOL)a1 installDatesCache:(id)a2 reason:(id)a3;
- (void).cxx_destruct;
- (void)updateDefaultsDueToCarPlayConfigUpdate;
- (void)_updateCarPlayDefaultsOnQueueWithReason:(id)a0 appLaunchCounts:(id)a1;
- (void)updateDefaultsIfNeededWithSystemDescriptors:(id)a0 installDatesCache:(id)a1 reason:(id)a2;
- (id)initWithSpotlightAppLaunchHistogram:(id)a0;
- (void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;
- (BOOL)_isDayZeroExperience;
- (void)_updateAmbientDefaultsOnQueueWithReason:(id)a0 appLaunchCounts:(id)a1;
- (void)dealloc;
- (void)waitForPendingAsynchronousOperations;

@end
