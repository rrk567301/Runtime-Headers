@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (id)initWithItems:(id)a0;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)localEndDate;
- (id)localStartDate;
- (unsigned long long)numberOfItems;
- (id)allItems;
- (id)approximateLocation;
- (id)itemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)universalEndDate;
- (id)universalStartDate;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;

@end
