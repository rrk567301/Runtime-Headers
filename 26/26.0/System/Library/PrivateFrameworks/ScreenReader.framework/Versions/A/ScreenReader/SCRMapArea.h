@interface SCRMapArea : SCRMapElement

- (id)typeDescription;
- (id)_mapAreaStringFromArray:(id)a0 locFormatStr:(id)a1;
- (BOOL)addHelpToRequest:(id)a0;
- (unsigned long long)directInteractionArrowCaptureMask;
- (long long)groupBehavior;
- (BOOL)isGestureContainerElement;

@end
