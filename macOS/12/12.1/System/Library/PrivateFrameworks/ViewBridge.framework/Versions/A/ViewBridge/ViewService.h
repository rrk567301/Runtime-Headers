@class NSArray, NSMutableSet;

@interface ViewService : HostOrService <ServiceCallsAuxiliary> {
    unsigned char _mayRequestArbitraryGeometryForTransparentSemiAutonomousWindows : 2;
    unsigned char _maySeeAllCommandEquivalentAttempts : 2;
    unsigned char _mayForwardEventsFromAccessoryView : 2;
    NSMutableSet *_spawnedRendezvousChildWindows;
    NSArray *_keyboardEventSpecs;
}

@property (readonly) BOOL hasKeyboardEventSpecs;
@property (readonly) BOOL maySeeAllCommandEquivalentAttempts;
@property (readonly) BOOL mayForwardEventsFromAccessoryView;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInScreenCoords;

- (void)dealloc;
- (void)invalidate:(id)a0;
- (void)declineKeyboardEventsOtherThan:(id)a0;
- (void)addChildWindow:(struct { BOOL x0; struct { unsigned char x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned long long x3; } x1; })a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (void)windowForContextID:(unsigned int)a0 reply:(id /* block */)a1;
- (void)potentialCommandEquivalentHitApplication:(id)a0 reply:(id /* block */)a1;
- (void)keyEventHitAccessoryView:(id)a0 reply:(id /* block */)a1;
- (void)frameOfServiceWindowDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 windowBackgroundColor:(id)a1 reply:(id /* block */)a2;
- (void)requestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 serviceWindowBackgroundColor:(id)a1 animate:(BOOL)a2 transaction:(id)a3 completion:(id /* block */)a4;
- (void)joinPair:(id)a0 window:(unsigned int)a1 reply:(id /* block */)a2;
- (void)handlePotentialCommandEquivalent:(struct __CGEvent { } *)a0 from:(id)a1 reply:(id /* block */)a2;
- (id)viewServiceWhichSpawnedRendezvousChildWindowWithIdentifier:(id)a0 amongHostsAndServices:(id)a1;
- (BOOL)mayRequestArbitraryGeometryForTransparentSemiAutonomousWindows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })safeFrameStartingWithHost:(id)a0 amongHostsAndServices:(id)a1 during:(const char *)a2;
- (id)_requestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 windowBackgroundColor:(id)a1 duringFunc:(const char *)a2 withSafeFrame:(id /* block */)a3;
- (void)_frameOfServiceWindowDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 windowBackgroundColor:(id)a1 reply:(id /* block */)a2;
- (void)_requestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 serviceWindowBackgroundColor:(id)a1 animate:(BOOL)a2 transaction:(id)a3 completion:(id /* block */)a4;
- (void)_addChildWindow:(const struct { BOOL x0; struct { unsigned char x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned long long x3; } x1; } *)a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (BOOL)potentialCommandEquivalentIsWhitelisted:(struct __CGEvent { } *)a0;
- (BOOL)wantsKeyboardEvent:(struct __CGEvent { } *)a0;

@end
