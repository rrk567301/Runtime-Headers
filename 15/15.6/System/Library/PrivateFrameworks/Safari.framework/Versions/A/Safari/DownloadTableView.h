@interface DownloadTableView : NSTableView

- (char)accessibilityPerformShowMenu;
- (id)accessibilityTitle;
- (unsigned long long)draggingSourceOperationMaskForLocal:(char)a0;
- (id)menuForEvent:(id)a0;
- (id)_controller;

@end
