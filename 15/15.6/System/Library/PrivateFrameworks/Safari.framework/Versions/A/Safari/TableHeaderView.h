@class NSDictionary;

@interface TableHeaderView : NSTableHeaderView {
    NSDictionary *_referenceColumnWidths;
    char _noSeparatorLines;
}

+ (id)updateHeaderViewForTableView:(id)a0;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)referenceColumnWidths;
- (void)resetReferenceColumnWidths;
- (void)setReferenceColumnWidths:(id)a0;

@end
