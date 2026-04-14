@interface SCRSortButton : SCRButton

- (BOOL)isSelected;
- (BOOL)alwaysAllowDrag;
- (void)appendSortOrderStatusDescription:(id)a0;
- (BOOL)ignoreDragNotifications;
- (id)itemDescriptionForEcho;

@end
