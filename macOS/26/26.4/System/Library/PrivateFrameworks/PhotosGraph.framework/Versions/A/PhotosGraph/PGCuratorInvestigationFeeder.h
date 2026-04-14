@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

- (id)initWithItems:(id)a0;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (unsigned long long)numberOfItems;
- (id)allItems;
- (id)approximateLocation;
- (id)itemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)universalEndDate;
- (id)universalStartDate;
- (id)sharedItems;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (id)privateItems;

@end
