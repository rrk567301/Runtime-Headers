@class NSDictionary, NSSet, NSString, _PASSimpleCoalescingTimer, CHSWidgetDescriptorProvider, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface ATXWidgetDescriptorCache : NSObject <CHSWidgetDescriptorProviderObserver> {
    CHSWidgetDescriptorProvider *_provider;
    NSString *_cachePath;
    NSString *_legacyCachePath;
    _PASSimpleCoalescingTimer *_coalescedDescriptorUpdateOperation;
    unsigned long long _coalescedDescriptorUpdateOptions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSSet *_allDescriptors;
    NSHashTable *_observers;
    NSDictionary *_intentToHomeScreenDescriptorDictionary;
    NSDictionary *_containerBundleIdAndKindToHomeScreenDescriptorDictionary;
}

@property (readonly, copy) NSSet *homeScreenDescriptors;
@property (readonly, copy) NSSet *complicationWidgetDescriptors;
@property (readonly, copy) NSSet *modularComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *landscapeModularComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *inlineComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *allWidgetDescriptorsAllowedOnLockscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithCachePath:(id)a0 legacyCachePath:(id)a1;
- (void)_updateDescriptorMappings;
- (void)unregisterObserver:(id)a0;
- (void)_queue_descriptorsDidChangeForDescriptorProvider:(id)a0;
- (id)_queue_fetchAllLegacyDescriptorMetadataWithError:(id *)a0;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (id)initWithProvider:(id)a0 cachePath:(id)a1 legacyCachePath:(id)a2;
- (id)_mergeNewDescriptorsWithCachedMetadataOnInternalQueue:(id)a0 descriptors:(id)a1;
- (id)homeScreenDescriptorForIntent:(id)a0;
- (id)fetchHomeScreenWidgetDescriptorMetadataWithError:(id *)a0;
- (id)init;
- (id)homeScreenDescriptorForContainerBundleId:(id)a0 widgetKind:(id)a1;
- (void)_scheduleCoalescedDescriptorUpdateOperation;
- (BOOL)_queue_writeAllDescriptorMetadata:(id)a0 error:(id *)a1;
- (id)_fetchAccessoryWidgetDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (id)_queue_allVisibleDescriptors;
- (id)homeScreenDescriptorForExtensionBundleId:(id)a0 kind:(id)a1;
- (id)fetchAccessoryWidgetDescriptorMetadataWithError:(id *)a0;
- (id)_queue_fetchAllDescriptorMetadataWithError:(id *)a0;
- (id)_updateAllDescriptorMetadataOnInternalQueue;
- (void)prepareForTermination;
- (id)_fetchHomeScreenWidgetDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (id)_queue_homeScreenWidgetDescriptors;
- (id)homeScreenDescriptorForWidget:(id)a0;
- (void).cxx_destruct;

@end
