@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, AXImageMonitor, OS_dispatch_source;

@interface AXCodeLoader : NSObject <AXImageMonitorObserver> {
    id<AXImageMonitor> _imageMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_loadAccessibilityCodeItemsSource;
    NSObject<OS_dispatch_source> *_dyldImageActivityCoalesceTimer;
    long long _monitoredLoadTriggeringImageCountSinceLastLoad;
    NSMutableSet *_trackedCodeItems;
    NSMutableSet *_accessibilityCodeItems;
    NSMutableDictionary *_codeItemsByNameType;
    id /* block */ _beginTrackingCompletion;
    NSObject<OS_dispatch_queue> *_beginTrackingCompletionQueue;
    BOOL _initialLoadHasOccurred;
    BOOL _initialLoadHasFinished;
    NSString *_currentPlatformKey;
}

@property (nonatomic) long long trackingMode;
@property (readonly, nonatomic) BOOL isTrackingLoadedCodeItems;
@property (readonly, nonatomic) BOOL isInitialLoadFinished;
@property (nonatomic) BOOL shouldAutoloadAccessibilityCodeItems;
@property (copy, nonatomic) id /* block */ shouldLoadAccessibilityCodeItemBlock;
@property (copy, nonatomic) id /* block */ didLoadAccessibilityCodeItemBlock;
@property (copy, nonatomic) id /* block */ loadEventWillOccurBlock;
@property (copy, nonatomic) id /* block */ loadEventDidOccurBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLoader;

- (id)init;
- (void).cxx_destruct;
- (void)setAccessibilityCodeItemsNeedLoaded;
- (void)beginTrackingLoadedCodeItemsWithMode:(long long)a0 completion:(id /* block */)a1 targetQueue:(id)a2;
- (void)imageMonitor:(id)a0 didAddImage:(id)a1;
- (void)iterateInitialImageListForImageMonitor:(id)a0;
- (id)initWithImageMonitor:(id)a0;
- (id /* block */)_validShouldLoadAccessibilityCodeItemBlock;
- (id /* block */)_validDidLoadAccessibilityCodeItemBlock;
- (id /* block */)_validLoadEventWillOccurBlock;
- (id /* block */)_validLoadEventDidOccurBlock;
- (void)endTrackingLoadedCodeItemsWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
- (void)_addTrackedCodeItem:(id)a0;
- (id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(BOOL)a0;
- (id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)a0;
- (id)loadedCodeItemsUsingTrackedItemsIfAvailable:(BOOL)a0;
- (id)codeItemForBundle:(id)a0;
- (void)_scheduleDyldImageActivityTimerWithDelay:(double)a0;
- (void)_cancelDyldImageActivityTimer;
- (void)_consumeBeginTrackingCompletionHandlerIfNeeded;
- (void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
- (void)_updateAccessibilityCodeItemDefinitionsIfNeeded;
- (void)_initializeCodeItemMappings;
- (void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;
- (id)_platformKeyForPlatform:(unsigned int)a0;
- (id)_accessibilityCodeItemMatchingName:(id)a0 type:(long long)a1 path:(id)a2;
- (void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)a0;
- (void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;
- (id)_accessibilityBundleMapURLs;
- (id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)a0;
- (void)_loadAccessibilityCodeItems;
- (void)queryAccessibilityBundleIsLoadedWithName:(id)a0 completion:(id /* block */)a1;
- (id)recomputedCodeItemsForAllFrameworks;
- (id)recomputedCodeItemsForLoadedAccessibilityBundles;
- (id)accessibilityCodeItemDefinitions;
- (id)_stateDescForItem:(id)a0;
- (void)logLoaderState;
- (id)trackedCodeItems;
- (id)rogueAccessibilityCodeItems;

@end
