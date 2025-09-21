@class SearchUICombinedCardSectionsView;

@interface SearchUICombinedCardSectionTableCell : SearchUITableCellView

@property (readonly) SearchUICombinedCardSectionsView *contentView;

- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)updateChevronVisible:(char)a0 leaveSpaceForChevron:(char)a1;
- (void)updateWithRowModel:(id)a0;

@end
