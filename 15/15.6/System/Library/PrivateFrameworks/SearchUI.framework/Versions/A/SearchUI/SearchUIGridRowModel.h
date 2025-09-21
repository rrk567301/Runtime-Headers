@class SearchUIGridLayoutManager;

@interface SearchUIGridRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SearchUIGridLayoutManager *gridLayoutManager;
@property (nonatomic) char shouldHide;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)hasLeadingImage;
- (id)initWithResult:(id)a0 cardSection:(id)a1 gridLayoutManager:(id)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (char)prefersNoSeparatorAbove;

@end
