@class NSArray;

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel

@property (retain) NSArray *cardSectionRowModels;
@property (readonly) long long numberOfRows;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)cardSection;
- (id)initWithResults:(id)a0;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2;
- (Class)cellViewClass;
- (BOOL)hasLeadingImage;

@end
