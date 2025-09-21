@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSString, PLXPCListenerOperatorComposition;

@interface PLScreenStateAgent : PLAgent <FBSDisplayLayoutObserver>

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *airPlayDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *carPlayDisplayMonitor;
@property (retain) PLXPCListenerOperatorComposition *windowModeListener;
@property (retain) NSMutableDictionary *lastScreenStateEntries;
@property (retain) NSMutableDictionary *lastLayoutMonitorEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryAggregateDefinitionForeground;
+ (id)entryAggregateDefinitionWidgetAdditionAnimation;
+ (id)entryAggregateDefinitionWidgetFlipAnimation;
+ (id)entryEventBackwardDefinitionIconDragging;
+ (id)entryEventForwardScreenState;
+ (id)entryEventPointBacklightEvent;

- (void)initOperatorDependancies;
- (void)dealloc;
- (void)log;
- (void)createCarPlayAccountingEvents:(id)a0;
- (id)init;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)logEventForwardMainScreenState:(id)a0;
- (void)accountWithLayoutEntries:(id)a0;
- (unsigned long long)convertWindowingMode:(id)a0;
- (unsigned long long)convertZoomLevel:(id)a0;
- (void)createAirPlayWiFiAccountingEvent:(id)a0;
- (void)logEventForwardAirPlayScreenState:(id)a0;
- (void)logEventForwardCarScreenState:(id)a0;
- (void)logEventPointMainBacklightEvent:(id)a0 withContext:(id)a1;
- (void)postEnhancedScreenStateNotification:(id)a0 currentLayout:(id)a1;

@end
