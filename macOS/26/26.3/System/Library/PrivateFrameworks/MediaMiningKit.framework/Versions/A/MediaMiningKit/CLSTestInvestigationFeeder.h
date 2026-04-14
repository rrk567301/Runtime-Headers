@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (id)localEndDate;
- (id)initWithItems:(id)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)allItems;
- (unsigned long long)numberOfItems;
- (id)approximateLocation;
- (id)localStartDate;
- (void).cxx_destruct;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)universalEndDate;
- (id)universalStartDate;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;

@end
