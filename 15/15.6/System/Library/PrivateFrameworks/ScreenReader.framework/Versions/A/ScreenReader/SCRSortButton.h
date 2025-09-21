@interface SCRSortButton : SCRButton

- (char)isSelected;
- (char)alwaysAllowDrag;
- (void)appendSortOrderStatusDescription:(id)a0;
- (char)handleDragToElement:(id)a0 hint:(long long)a1;
- (char)ignoreDragNotifications;
- (id)itemDescriptionForEcho;
- (id)tableColumnUIElement;

@end
