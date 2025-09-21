@class NSArray;

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel

@property (retain) NSArray *cardSectionRowModels;
@property (readonly) long long numberOfRows;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)cardSection;
- (char)hasLeadingImage;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3 builder:(id)a4;
- (id)initWithResults:(id)a0 itemIdentifier:(id)a1 builder:(id)a2;

@end
