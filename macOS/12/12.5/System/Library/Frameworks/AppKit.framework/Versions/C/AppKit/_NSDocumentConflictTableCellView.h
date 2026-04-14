@class NSDocumentConflictPanelController, NSTextField;

@interface _NSDocumentConflictTableCellView : NSTableCellView {
    NSTextField *firstLine;
    NSTextField *secondLine;
}

@property NSDocumentConflictPanelController *controller;

- (double)additionalWidthRequired;
- (void)showPreview:(id)a0;

@end
