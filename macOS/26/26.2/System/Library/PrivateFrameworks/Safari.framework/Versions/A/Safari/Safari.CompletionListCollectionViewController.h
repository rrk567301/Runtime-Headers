@class _TtCC6Safari38CompletionListCollectionViewController14CollectionView, NSArray, _TtCC6Safari38CompletionListCollectionViewController20CollectionViewLayout;

@interface Safari.CompletionListCollectionViewController : NSViewController {
    void /* function */ sections;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ sizingCompletionListCollectionViewItem;
    void /* unknown type, empty encoding */ sizingCompletionListCollectionViewSearchUIItem;
    void /* unknown type, empty encoding */ sizingCompletionListCollectionViewHostingItem;
    void /* unknown type, empty encoding */ registeredSearchUICellIdentifiers;
    void /* unknown type, empty encoding */ searchUICellHeights;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ shouldClearRegisteredSearchUICellIndentifiers;
}

@property (nonatomic, retain) _TtCC6Safari38CompletionListCollectionViewController14CollectionView *collectionView;
@property (nonatomic, retain) _TtCC6Safari38CompletionListCollectionViewController20CollectionViewLayout *collectionViewLayout;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, weak) void /* function */ delegate;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewWillDisappear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;

@end
