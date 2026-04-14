@class NSDocumentConflictPanelController, NSTextField;

@interface _NSDocumentConflictTableCellView : NSTableCellView {
    NSTextField *firstLine;
    NSTextField *secondLine;
}

@property NSDocumentConflictPanelController *controller;

- (void)showPreview:(id)a0;
- (double)additionalWidthRequired;

@end
