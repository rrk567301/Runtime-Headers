@class NSArray;

@interface PXSortOrderState : PXObservable

@property (readonly, nonatomic) unsigned long long sortOrder;
@property (readonly, nonatomic) NSArray *possibleSortOrders;

- (void)setSortOrder:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)enumeratePossibleSortOrdersUsingBlock:(id /* block */)a0;
- (id)initWithSortOrder:(unsigned long long)a0;

@end
