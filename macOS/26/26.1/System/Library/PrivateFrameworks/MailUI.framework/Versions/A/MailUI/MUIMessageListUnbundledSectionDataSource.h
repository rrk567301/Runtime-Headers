@class NSDictionary;
@protocol EFCancelable;

@interface MUIMessageListUnbundledSectionDataSource : MessageListSectionDataSource

@property (retain, nonatomic) NSDictionary *snippetHintsByGlobalMessageID;
@property (nonatomic, getter=shouldHideFollowUp) BOOL hideFollowUp;
@property (retain, nonatomic) id<EFCancelable> hideFollowUpUserDefaultsObserver;
@property (nonatomic, getter=isLocalMailboxSearchScope) BOOL localMailboxSearchScope;
@property (retain, nonatomic) id<EFCancelable> localMailboxSearchScopeUserDefaultsObserver;

- (void).cxx_destruct;
- (id)_indexPathsForSelectedItems;
- (void)collection:(id)a0 shouldHighlightSnippetHints:(id)a1;
- (id)sectionForCollection:(id)a0;
- (id)_allowedSections;
- (void)_configureCell:(id)a0 atIndexPath:(id)a1 itemID:(id)a2;
- (id)configuredCollectionViewCellForCollectionView:(id)a0 indexPath:(id)a1 itemID:(id)a2 cellIdentifier:(id)a3;
- (id)initWithSection:(id)a0 collectionView:(id)a1 messageList:(id)a2 initialLoadCompletedPromise:(id)a3 layoutValuesHelper:(id)a4 state:(id)a5 headerType:(unsigned long long)a6;

@end
