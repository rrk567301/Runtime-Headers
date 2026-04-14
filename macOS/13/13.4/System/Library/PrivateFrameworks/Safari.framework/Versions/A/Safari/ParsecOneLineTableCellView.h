@class NSImage;
@protocol ParsecTableCellViewDelegate;

@interface ParsecOneLineTableCellView : UnifiedFieldCompletionTableCellView <ParsecTableCellView>

@property (class, readonly, nonatomic) NSImage *placeholderImage;

@property (weak, nonatomic) id<ParsecTableCellViewDelegate> delegate;

- (void).cxx_destruct;
- (id)identifier;
- (void)_updateImageView:(id)a0;
- (void)_updateImageView:(id)a0 forSearchResult:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 isTemplate:(BOOL)a3;
- (void)configureUsingCompletionListItem:(void *)a0 session:(id)a1;

@end
