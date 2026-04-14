@class NSStatusItem, NSString, NSWindow;

@interface RPMacUtility : NSObject <NSWindowDelegate> {
    id _sourceWindowDelegate;
    id _replayKitDelegate;
    NSWindow *_sourceWindow;
}

@property (retain, nonatomic) NSStatusItem *recStatusItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)windowDidMiniaturize:(id)a0;
- (void)windowDidDeminiaturize:(id)a0;
- (void)windowWillEnterFullScreen:(id)a0;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowWillExitFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (void)registerForApplicationStateChangesWithSourceUIWindow:(id)a0;
- (void)setupSystemStatusItem;
- (void)removeSystemStatusItem;
- (void)unregisterForApplicationStateChanges;
- (void)statusMenuStop:(id)a0;

@end
