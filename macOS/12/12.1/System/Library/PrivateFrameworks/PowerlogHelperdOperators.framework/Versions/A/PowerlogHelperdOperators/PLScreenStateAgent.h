@class FBSDisplayLayoutMonitor, NSString;

@interface PLScreenStateAgent : PLAgent <FBSDisplayLayoutObserver>

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *airPlayDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *carPlayDisplayMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointBacklightEvent;
+ (id)entryEventForwardScreenState;
+ (id)entryEventBackwardDefinitionIconDragging;
+ (id)entryAggregateDefinitionWidgetAdditionAnimation;
+ (id)entryAggregateDefinitionWidgetFlipAnimation;
+ (id)entryAggregateDefinitionForeground;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)initOperatorDependancies;
- (void)logEventForwardCarScreenState:(id)a0;
- (void)logEventForwardAirPlayScreenState:(id)a0;
- (void)logEventForwardMainScreenState:(id)a0;
- (void)accountWithLayoutEntries:(id)a0;
- (void)createCarPlayAccountingEvents:(id)a0;
- (void)createAirPlayWiFiAccountingEvent:(id)a0;
- (void)logEventPointMainBacklightEvent:(id)a0 withContext:(id)a1;

@end
