@class NSMutableArray;

@interface SearchUICollectionModel : NSObject

@property (retain) NSMutableArray *sectionModels;
@property unsigned long long queryId;
@property BOOL isEntitySearch;

+ (id)collectionModelWithTableModel:(id)a0 expandedSections:(id)a1;
+ (id)collectionModelWithTableModel:(id)a0 expandedSections:(id)a1 expandedCollectionSections:(id)a2;

- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)removeRowModel:(id)a0;
- (long long)indexOfSection:(id)a0;
- (long long)backgroundStyleForSectionIndex:(long long)a0 attributes:(id)a1;
- (void)deleteSection:(long long)a0;
- (void)enumerateRowModels:(id /* block */)a0;
- (long long)indexOfCollectionCardSection:(id)a0;
- (BOOL)indexPathExists:(id)a0;
- (id)indexPathForRowModel:(id)a0;
- (id)layoutSectionForSectionIndex:(long long)a0 layoutEnvironment:(id)a1 attributes:(id)a2;
- (id)rowModelForIndexPath:(id)a0;
- (id)sectionForSection:(long long)a0;
- (id)sectionModelForIndex:(long long)a0;
- (BOOL)sectionNeedsHorizontalNavigation:(long long)a0;
- (id)sectionsWithItemsToBeHeightMatched;
- (int)separatorStyleForIndexPath:(id)a0;
- (int)separatorStyleForIndexPath:(id)a0 shouldDrawTopAndBottomSeparators:(BOOL)a1;
- (BOOL)shouldDisplayChevronForIndexPath:(id)a0 nextCardsEnabled:(BOOL)a1;
- (BOOL)shouldLeaveSpaceForChevronForIndexPath:(id)a0;
- (id)updatedTableModelByDeletingSectionIndex:(unsigned long long)a0;

@end
