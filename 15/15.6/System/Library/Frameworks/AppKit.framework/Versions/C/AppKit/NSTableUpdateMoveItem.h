@class NSTableRowView;

@interface NSTableUpdateMoveItem : NSTableUpdateItem {
    char _selected;
    char _hidden;
    NSTableRowView *_viewBeingMoved;
}

- (void)dealloc;

@end
