@class FI_TListTextField, NSFont;

@interface FI_TListBaseCellView : NSTableCellView {
    FI_TListTextField *_titleTextField;
}

@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (copy, nonatomic) NSFont *titleFont;
@property (nonatomic) int mainProperty;
@property (nonatomic, getter=isInBatchUpdate) BOOL inBatchUpdate;

- (id)init;
- (void).cxx_destruct;
- (id)titleFont;
- (void)setTitleFont:(id)a0;
- (struct CGSize { double x0; double x1; })idealSize;
- (void)setTitleNeedsDisplay;

@end
