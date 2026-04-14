@class NSCountedSet, NSMapTable, UnifiedFieldCompletionStyledTableCellView, NSMutableDictionary;
@protocol ParsecTableCellView;

@interface UnifiedFieldCompletionListCellViewReuseManager : NSObject {
    NSMapTable *_viewArraysByClass;
    NSCountedSet *_viewIndicesByClass;
    NSMutableDictionary *_parsecCellReuseManagersByIdentifier;
}

@property (readonly, nonatomic) UnifiedFieldCompletionStyledTableCellView<ParsecTableCellView> *mostRecentlyUsedParsecCellView;

+ (id)sharedManager;
+ (int)cellViewTypeForResult:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)prepareForReload;
- (id)parsecCellViewOfType:(int)a0 forSearchResult:(id)a1;
- (id)nextTableCellView;
- (id)nextHeaderCellView;
- (id)_nextCellViewOfClass:(Class)a0;
- (id)_parsecCellViewOfType:(int)a0 forSearchResult:(id)a1;
- (id)_identifierForParsecCellViewType:(int)a0;
- (id)_createParsecCellViewWithIdentifier:(id)a0;
- (BOOL)_shouldProgramaticallyCreateParsecCellViewWithIdentifier:(id)a0;
- (Class)_parsecCellViewClassFromIdentifier:(id)a0;
- (id)_createCellViewWithIdentifier:(id)a0 fromNib:(id)a1;

@end
