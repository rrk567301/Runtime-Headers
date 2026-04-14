@class NSArray;

@interface SearchUITableModel : NSObject

@property (retain, nonatomic) NSArray *tableRowModel;
@property (retain, nonatomic) NSArray *sections;
@property (readonly) unsigned long long queryId;

+ (id)tableModelWithResult:(id)a0;
+ (id)tableModelWithSections:(id)a0 expandedSections:(id)a1 expandedCollectionCardSections:(id)a2;
+ (BOOL)resultHasHorizontallyGroupedCardSections:(id)a0;
+ (id)tableModelWithCardSections:(id)a0 result:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 shouldCombine:(BOOL)a4;
+ (id)tableModelWithCardSections:(id)a0 isInline:(BOOL)a1 queryId:(unsigned long long)a2;
+ (id)rowModelForCardSection:(id)a0 result:(id)a1;
+ (id)tableModelWithResults:(id)a0;

- (unsigned long long)numberOfSections;
- (int)separatorStyleForIndexPath:(id)a0;
- (unsigned long long)indexOfSection:(id)a0;
- (long long)numberOfRowsForSection:(long long)a0;
- (void)enumerateRowModels:(id /* block */)a0;
- (void)replaceResult:(id)a0 withResult:(id)a1 completion:(id /* block */)a2;
- (id)resultForIndexPath:(id)a0;
- (id)updatedTableModelByDeletingSectionIndex:(unsigned long long)a0;
- (id)rowModelForIndexPath:(id)a0;
- (id)indexPathForRowModel:(id)a0;
- (id)initWithQueryId:(unsigned long long)a0;
- (id)description;
- (id)cardSectionForIndexPath:(id)a0;
- (BOOL)rowWillFillBackgroundWithContentAtIndexPath:(id)a0;
- (BOOL)indexPathExists:(id)a0;
- (id)sectionForIndex:(unsigned long long)a0;
- (id)removeRowModel:(id)a0;
- (void).cxx_destruct;
- (id)indexPathForResultInFirstTwoSections:(id)a0;
- (id)updatedTableModelWithExpandedSections:(id)a0 expandedCollectionCardSections:(id)a1 hiddenSections:(id)a2 atSectionIndex:(unsigned long long)a3;

@end
