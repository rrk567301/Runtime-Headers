@class NSMapTable, NSMutableSet;

@interface _NSCGSWindowOrderingProperties : NSObject {
    NSMapTable *_levelByWindow;
    NSMapTable *_orderingGroupByWindow;
    NSMutableSet *_disassociateFromSpacesIfOrderedOut;
    NSMutableSet *_reassociateWithSpacesByGeometry;
}

- (void)dealloc;
- (id)init;
- (void)addWindow:(id)a0 toOrderingGroupAboveWindow:(id)a1;
- (int)levelForWindow:(id)a0;
- (void)setLevel:(int)a0 forWindow:(id)a1;
- (void)setDesiredSpace:(unsigned long long)a0 forWindow:(id)a1;
- (void)disassociateFromSpacesIfOrderedOut:(id)a0;
- (void)reassociateWithSpacesByGeometry:(id)a0;
- (BOOL)willDisassociateFromSpacesIfOrderedOut:(id)a0;
- (BOOL)willReassociateWithSpacesByGeometry:(id)a0;
- (void)lockWindow:(id)a0 toAbsoluteSublevel:(int)a1;
- (void)unlockWindowSublevel:(id)a0;
- (id)orderingGroupForWindow:(id)a0;
- (void)addWindow:(id)a0 toOrderingGroupBelowWindow:(id)a1;
- (void)removeWindowFromOrderingGroup:(id)a0;
- (void)clearOrderingGroup:(id)a0;

@end
