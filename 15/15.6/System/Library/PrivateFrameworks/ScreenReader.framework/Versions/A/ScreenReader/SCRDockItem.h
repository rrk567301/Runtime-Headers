@interface SCRDockItem : SCRButton {
    unsigned long long _dockListIndex;
}

- (char)isEnabled;
- (id)typeDescription;
- (char)isSelected;
- (id)statusDescription;
- (void)_jumpToStacks;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addItemStatusToRequest:(id)a0;
- (unsigned long long)dockListIndex;
- (double)dropWaitTime;
- (char)gestureTrackingMovesSelectionToVOC;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)makeFrontmost:(id)a0;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (unsigned int)windowIdentifierAndTopLevelUIElement:(id *)a0;

@end
