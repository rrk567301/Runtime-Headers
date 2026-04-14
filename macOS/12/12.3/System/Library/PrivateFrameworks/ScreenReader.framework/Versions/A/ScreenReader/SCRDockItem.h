@interface SCRDockItem : SCRButton {
    unsigned long long _dockListIndex;
}

- (BOOL)isEnabled;
- (id)typeDescription;
- (BOOL)isSelected;
- (id)statusDescription;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)makeFrontmost:(id)a0;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (void)addItemStatusToRequest:(id)a0;
- (void)_jumpToStacks;
- (unsigned long long)dockListIndex;
- (BOOL)gestureTrackingMovesSelectionToVOC;
- (unsigned int)windowIdentifierAndTopLevelUIElement:(id *)a0;
- (double)dropWaitTime;

@end
