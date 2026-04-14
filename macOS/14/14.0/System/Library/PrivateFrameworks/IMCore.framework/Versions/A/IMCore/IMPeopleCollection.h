@class NSArray, NSMutableArray;

@interface IMPeopleCollection : IMPeople

@property (retain, nonatomic) NSMutableArray *_collectedPeople;
@property (readonly, nonatomic) NSArray *collectedIMPeople;

- (id)init;
- (void).cxx_destruct;
- (id)groups;
- (id)people;
- (BOOL)containsPerson:(id)a0;
- (void)removeIMPeople:(id)a0;
- (void)_collectionNotification:(id)a0;
- (void)addIMPeople:(id)a0;
- (BOOL)collectsIMPeople:(id)a0;

@end
