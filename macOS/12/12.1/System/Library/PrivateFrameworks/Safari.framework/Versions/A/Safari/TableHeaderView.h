@class NSDictionary;

@interface TableHeaderView : NSTableHeaderView {
    NSDictionary *_referenceColumnWidths;
    BOOL _noSeparatorLines;
}

+ (id)updateHeaderViewForTableView:(id)a0;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)resetReferenceColumnWidths;
- (id)referenceColumnWidths;
- (void)setReferenceColumnWidths:(id)a0;

@end
