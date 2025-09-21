@class NSArray;

@interface SearchUITableModel : NSObject

@property (retain, nonatomic) NSArray *tableRowModel;
@property (retain, nonatomic) NSArray *sections;
@property (readonly) unsigned long long queryId;

+ (char)resultHasHorizontallyGroupedCardSections:(id)a0;
+ (id)rowModelForCardSection:(id)a0 result:(id)a1;
+ (char)shouldDisplayChevronForRowModel:(id)a0 previousRowModel:(id)a1 nextRowModel:(id)a2 nextCardsEnabled:(char)a3;
+ (id)tableModelWithCardSections:(id)a0 isInline:(char)a1 queryId:(unsigned long long)a2;
+ (id)tableModelWithCardSections:(id)a0 result:(id)a1 isInline:(char)a2 queryId:(unsigned long long)a3 shouldCombine:(char)a4;
+ (id)tableModelWithResult:(id)a0;
+ (id)tableModelWithResults:(id)a0;
+ (id)tableModelWithSections:(id)a0 expandedSections:(id)a1 expandedCollectionCardSections:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)numberOfSections;
- (unsigned long long)indexOfSection:(id)a0;
- (id)removeRowModel:(id)a0;
- (id)cardSectionForIndexPath:(id)a0;
- (void)enumerateRowModels:(id /* block */)a0;
- (char)indexPathExists:(id)a0;
- (id)indexPathForResultInFirstTwoSections:(id)a0;
- (id)indexPathForRowModel:(id)a0;
- (id)initWithQueryId:(unsigned long long)a0;
- (long long)numberOfRowsForSection:(long long)a0;
- (void)replaceResult:(id)a0 withResult:(id)a1 completion:(id /* block */)a2;
- (id)resultForIndexPath:(id)a0;
- (id)rowModelForIndexPath:(id)a0;
- (char)rowWillFillBackgroundWithContentAtIndexPath:(id)a0;
- (id)sectionForIndex:(unsigned long long)a0;
- (int)separatorStyleForIndexPath:(id)a0;
- (char)shouldDisplayChevronForIndexPath:(id)a0 nextCardsEnabled:(char)a1;
- (char)shouldLeaveSpaceForChevronForIndexPath:(id)a0;
- (id)updatedTableModelByDeletingSectionIndex:(unsigned long long)a0;
- (id)updatedTableModelWithExpandedSections:(id)a0 expandedCollectionCardSections:(id)a1 hiddenSections:(id)a2 atSectionIndex:(unsigned long long)a3;

@end
