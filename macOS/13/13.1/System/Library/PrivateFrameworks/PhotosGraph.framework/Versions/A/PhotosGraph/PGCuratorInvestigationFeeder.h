@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

- (id)itemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfItems;
- (id)initWithItems:(id)a0;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)approximateLocation;
- (id)universalStartDate;
- (id)universalEndDate;
- (id)sharedItems;
- (id)localStartDateComponents;
- (id)localEndDateComponents;
- (id)privateItems;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
