@class NSStatusItem;

@interface RPMacUtility : NSObject {
    id _replayKitDelegate;
}

@property (retain, nonatomic) NSStatusItem *recStatusItem;

- (void)windowDidMiniaturize:(id)a0;
- (void)windowDidDeminiaturize:(id)a0;
- (void)windowWillClose:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)statusMenuStop:(id)a0;
- (void)registerForApplicationStateChangesWithSourceUIWindow:(id)a0;
- (void)removeSystemStatusItem;
- (void)setupSystemStatusItem;
- (void)unregisterForApplicationStateChanges;

@end
