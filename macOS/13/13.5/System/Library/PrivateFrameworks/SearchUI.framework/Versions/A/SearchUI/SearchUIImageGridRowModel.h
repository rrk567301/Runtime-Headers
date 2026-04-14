@class NSArray;

@interface SearchUIImageGridRowModel : SearchUICardSectionRowModel

@property (retain) NSArray *cardSectionRowModels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)cardSection;
- (id)initWithResults:(id)a0;
- (Class)cardSectionViewClass;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (BOOL)isTappable;

@end
