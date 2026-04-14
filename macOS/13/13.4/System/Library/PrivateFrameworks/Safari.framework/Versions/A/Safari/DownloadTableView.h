@interface DownloadTableView : NSTableView

- (id)_controller;
- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityTitle;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (id)menuForEvent:(id)a0;

@end
