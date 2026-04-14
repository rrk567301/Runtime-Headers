@class NSString;

@interface ViewHost : HostOrService <HostCallsAuxiliary> {
    unsigned int _seed;
    NSString *_rendezvousWindowIdentifier;
    unsigned char _hostAppIsActive : 1;
    unsigned char _keyTestWindowIsKey : 1;
    unsigned char _remoteViewIsFirstResponder : 1;
    unsigned char _wantsAggressiveKeyboardFocusTheftCancellation : 1;
    unsigned char _mostRecentlyResignedFirstResponderInFavorOfAccessoryView : 1;
    unsigned char _mayAttemptCommandEquivalentAtWill : 2;
}

@property (readonly) BOOL mayAttemptCommandEquivalentAtWill;
@property (readonly) BOOL hostAppIsActive;
@property (readonly) BOOL keyTestWindowIsKey;
@property (readonly) BOOL remoteViewIsFirstResponder;
@property (readonly) BOOL wantsAggressiveKeyboardFocusTheftCancellation;
@property (readonly) BOOL mostRecentlyResignedFirstResponderInFavorOfAccessoryView;
@property (readonly) unsigned char hostWindowKind;
@property (readonly) unsigned char hostWindowBase;
@property (readonly) unsigned int seed;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInScreenCoords;
@property (copy) NSString *serviceViewControllerIdentifier;

+ (id)ultimateAncestorOfWindow:(unsigned int)a0 inDictionaryOfHostsAndServices:(id)a1 consideringEachViewHost:(id /* block */)a2;
+ (id)ultimateAncestorOfWindow:(unsigned int)a0 inDictionaryOfHostsAndServices:(id)a1;
+ (id)ultimateAncestor:(id)a0 forApp:(struct { unsigned int x0[8]; })a1;

- (void)dealloc;
- (void)invalidate:(id)a0;
- (void)remoteViewKeyTestWindowResignedKey;
- (void)remoteViewKeyTestWindowBecameKeyWhileFirstResponder:(BOOL)a0 inActiveApp:(BOOL)a1 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)a2;
- (void)remoteViewResignedFirstResponderInService:(id)a0 forWindowWithKey:(BOOL)a1 inActiveApp:(BOOL)a2 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)a3 inFavorOfAccessoryView:(BOOL)a4;
- (void)potentialCommandEquivalentHitRemoteView:(id)a0 reply:(id /* block */)a1;
- (void)remoteViewBecameFirstResponderForWindowWithKey:(BOOL)a0 inActiveApp:(BOOL)a1 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)a2;
- (void)remoteViewBecameAssociatedWithWindow:(unsigned int)a0 reply:(id /* block */)a1;
- (void)joinPair:(id)a0 serviceViewControllerIdentifier:(id)a1 frameInScreenCoords:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hostWindowKind:(unsigned char)a3 hostWindowBase:(unsigned char)a4 reply:(id /* block */)a5;
- (void)updateFrameInScreenCoords:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)killViewService:(id /* block */)a0;
- (struct __LSASN { } *)ultimateHostAppSerialNumber;
- (void)bumpSeed;
- (void)potentialCommandEquivalentHitServiceApp:(struct __CGEvent { } *)a0 from:(id)a1 reply:(id /* block */)a2;
- (void)forwardEventToAccessoryView:(struct __CGEvent { } *)a0 reply:(id /* block */)a1;

@end
