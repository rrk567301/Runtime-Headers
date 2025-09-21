@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (id)initWithItems:(id)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)allItems;
- (id)localEndDate;
- (id)localStartDate;
- (id)approximateLocation;
- (void).cxx_destruct;
- (id)universalEndDate;
- (id)universalStartDate;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;

@end
