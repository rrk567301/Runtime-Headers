@class NSImage;

@interface ParsecOneLineTableCellView : UnifiedFieldCompletionTableCellView <ParsecTableCellView>

@property (class, readonly, nonatomic) NSImage *placeholderImage;

- (id)identifier;
- (void)_updateImageView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 isTemplate:(BOOL)a2;
- (void)_updateImageView:(id)a0;
- (void)configureUsingCompletionListItem:(void *)a0 session:(id)a1;

@end
