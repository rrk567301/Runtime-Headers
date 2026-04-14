@interface FI_TLabelView : NSLabelView

+ (Class)cellClass;
+ (struct CGSize { double x0; double x1; })sizeWithImagePosition:(unsigned long long)a0;
+ (id)colorNames;

- (void)setEnabled:(BOOL)a0;
- (void)setSelectedFavoriteTags:(unsigned long long)a0;
- (unsigned long long)selectedFavoriteTags;
- (id)labelCell;
- (long long)favoriteValue;
- (void)setWhichFavoriteTagsWillRemove:(unsigned long long)a0;
- (unsigned long long)whichFavoriteTagsWillRemove;
- (void)setForApplyingFavoriteTags:(BOOL)a0;

@end
