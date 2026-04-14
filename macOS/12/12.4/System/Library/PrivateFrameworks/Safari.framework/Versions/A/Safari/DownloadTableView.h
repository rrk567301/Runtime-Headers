@interface DownloadTableView : NSTableView

- (id)_controller;
- (id)accessibilityTitle;
- (BOOL)accessibilityPerformShowMenu;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (id)menuForEvent:(id)a0;

@end
