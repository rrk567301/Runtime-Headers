@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *negativeItems;

- (id)initWithItems:(id)a0;
- (id)debugDescription;
- (BOOL)isActive;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 negativeItems:(id)a1;

@end
