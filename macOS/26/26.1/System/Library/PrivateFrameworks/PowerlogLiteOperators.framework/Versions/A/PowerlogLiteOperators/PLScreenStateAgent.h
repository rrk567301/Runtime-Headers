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
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitionForeground;
+ (id)entryAggregateDefinitionWidgetAdditionAnimation;
+ (id)entryAggregateDefinitionWidgetFlipAnimation;
+ (id)entryEventBackwardDefinitionIconDragging;
+ (id)entryEventForwardScreenState;
+ (id)entryEventPointBacklightEvent;

- (void)initOperatorDependancies;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)createCarPlayAccountingEvents:(id)a0;
- (void)log;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
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
