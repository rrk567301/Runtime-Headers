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
- (id)_init;
- (void).cxx_destruct;
- (void)prepareForReload;
- (id)nextHeaderCellView;
- (id)nextTableCellView;
- (id)parsecCellViewOfType:(int)a0 forSearchResult:(id)a1;
- (id)_parsecCellViewOfType:(int)a0 forSearchResult:(id)a1;
- (BOOL)_shouldProgramaticallyCreateParsecCellViewWithIdentifier:(id)a0;
- (Class)_parsecCellViewClassFromIdentifier:(id)a0;
- (id)_createParsecCellViewWithIdentifier:(id)a0;
- (id)_nextCellViewOfClass:(Class)a0;
- (id)_createCellViewWithIdentifier:(id)a0 fromNib:(id)a1;
- (id)_identifierForParsecCellViewType:(int)a0;

@end
