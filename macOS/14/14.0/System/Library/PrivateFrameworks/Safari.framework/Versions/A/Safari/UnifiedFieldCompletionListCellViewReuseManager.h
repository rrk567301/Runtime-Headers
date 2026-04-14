@class NSCountedSet, NSMapTable, UnifiedFieldCompletionStyledTableCellView, NSMutableDictionary, NSCache;
@protocol ParsecTableCellView;

@interface UnifiedFieldCompletionListCellViewReuseManager : NSObject <ParsecTableCellViewDelegate> {
    NSMapTable *_viewArraysByClass;
    NSCountedSet *_viewIndicesByClass;
    NSMutableDictionary *_parsecCellReuseManagersByIdentifier;
    NSCache *_iconImageCache;
}

@property (readonly, nonatomic) UnifiedFieldCompletionStyledTableCellView<ParsecTableCellView> *mostRecentlyUsedParsecCellView;

+ (id)sharedManager;
+ (int)cellViewTypeForResult:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)_createCellViewWithIdentifier:(id)a0 fromNib:(id)a1;
- (id)_createParsecCellViewWithIdentifier:(id)a0;
- (id)_identifierForParsecCellViewType:(int)a0;
- (id)_nextCellViewOfClass:(Class)a0;
- (Class)_parsecCellViewClassFromIdentifier:(id)a0;
- (id)_parsecCellViewOfType:(int)a0 forSearchResult:(id)a1;
- (BOOL)_shouldProgramaticallyCreateParsecCellViewWithIdentifier:(id)a0;
- (id)cachedImageForSearchResultIdentifier:(id)a0;
- (id)nextBannerCellView;
- (id)nextHeaderCellView;
- (id)nextTableCellView;
- (id)parsecCellViewOfType:(int)a0 forSearchResult:(id)a1;
- (void)prepareForReload;
- (void)setCachedImage:(id)a0 forSearchResultIdentifier:(id)a1;

@end
