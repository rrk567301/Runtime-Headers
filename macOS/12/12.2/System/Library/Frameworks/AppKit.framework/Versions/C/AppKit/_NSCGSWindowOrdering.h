@class NSString, NSMutableArray, _NSCGSWindowOrderingProperties;

@interface _NSCGSWindowOrdering : NSObject <_NSCGSWindowOrderingState> {
    NSMutableArray *_operations;
    _NSCGSWindowOrderingProperties *_latestProperties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentOrdering;

- (void)dealloc;
- (id)init;
- (id)windowsWithOptions:(unsigned int)a0 onSpaces:(id)a1 forConnectionID:(unsigned int)a2;
- (id)onScreenWindowsForConnectionID:(unsigned int)a0;
- (void)orderApplicationWindowsFront;
- (void)addWindow:(id)a0 toOrderingGroupAboveWindow:(id)a1;
- (int)levelForWindow:(id)a0;
- (void)setLevel:(int)a0 forWindow:(id)a1;
- (void)setDesiredSpace:(unsigned long long)a0 forWindow:(id)a1;
- (void)disassociateFromSpacesIfOrderedOut:(id)a0;
- (void)reassociateWithSpacesByGeometry:(id)a0;
- (void)lockWindow:(id)a0 toAbsoluteSublevel:(int)a1;
- (void)unlockWindowSublevel:(id)a0;
- (id)orderingGroupForWindow:(id)a0;
- (void)addWindow:(id)a0 toOrderingGroupBelowWindow:(id)a1;
- (void)removeWindowFromOrderingGroup:(id)a0;
- (void)clearOrderingGroup:(id)a0;
- (void)orderWindow:(id)a0 op:(int)a1 againstWindow:(id)a2;
- (void)orderGroup:(id)a0 op:(int)a1 againstWindow:(id)a2;
- (void)conditionallyOrderGroupFront:(id)a0 withTimestamp:(double)a1;
- (BOOL)_hasUncommittedSpaceAssignmentChanges:(id)a0;
- (unsigned long long)onScreenWindowsCountForConnectionID:(unsigned int)a0;
- (BOOL)isWindowOrderedIn:(id)a0;
- (void)orderGroup:(id)a0 op:(int)a1 againstWindow:(id)a2 ifActive:(BOOL)a3;
- (void)enableActivationOrderingForWindow:(id)a0 isInitiallyOrderedIn:(BOOL)a1;
- (void)disableActivationOrderingForWindow:(id)a0;

@end
