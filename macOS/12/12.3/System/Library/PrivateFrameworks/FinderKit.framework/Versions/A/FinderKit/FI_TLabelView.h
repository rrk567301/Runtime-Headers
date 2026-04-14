@interface FI_TLabelView : NSLabelView

+ (Class)cellClass;
+ (id)colorNames;
+ (struct CGSize { double x0; double x1; })sizeWithImagePosition:(unsigned long long)a0;

- (void)setEnabled:(BOOL)a0;
- (id)labelCell;
- (void)setSelectedFavoriteTags:(unsigned long long)a0;
- (unsigned long long)selectedFavoriteTags;
- (long long)favoriteValue;
- (void)setWhichFavoriteTagsWillRemove:(unsigned long long)a0;
- (unsigned long long)whichFavoriteTagsWillRemove;
- (void)setForApplyingFavoriteTags:(BOOL)a0;

@end
