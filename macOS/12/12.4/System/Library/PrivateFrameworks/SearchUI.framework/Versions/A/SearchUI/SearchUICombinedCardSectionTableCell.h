@class SearchUICombinedCardSectionsView;

@interface SearchUICombinedCardSectionTableCell : TLKTableCellView

@property (readonly) SearchUICombinedCardSectionsView *contentView;

- (void)updateWithRowModel:(id)a0;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
