@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (id)itemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfItems;
- (id)initWithItems:(id)a0;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)approximateLocation;
- (id)localStartDate;
- (id)localEndDate;
- (id)universalStartDate;
- (id)universalEndDate;
- (id)localStartDateComponents;
- (id)localEndDateComponents;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
