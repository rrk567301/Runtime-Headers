@class NSMutableArray;

@interface GEOMutableURLQueryItems : NSObject

@property (readonly, nonatomic) NSMutableArray *items;

- (id)initWithItems:(id)a0;
- (void)addItem:(id)a0;
- (void)addItemWithName:(id)a0 value:(id)a1;
- (id)init;
- (void)addItemWithName:(id)a0 uintValue:(unsigned int)a1;
- (void)addItemsFromArray:(id)a0;
- (void)addItemWithName:(id)a0 intValue:(int)a1;
- (void)addItemWithName:(id)a0 uint64Value:(unsigned long long)a1;
- (void)removeItemsWithName:(id)a0;
- (void).cxx_destruct;

@end
