@class NSString, SFSearchResult;

@interface SearchUIScreenTimeResultsRowModel : SearchUIRowModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) SFSearchResult *overrideIdentifyingResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)identifyingResult;
- (Class)cellViewClass;
- (BOOL)isTappable;
- (id)initWithSection:(id)a0 result:(id)a1;

@end
