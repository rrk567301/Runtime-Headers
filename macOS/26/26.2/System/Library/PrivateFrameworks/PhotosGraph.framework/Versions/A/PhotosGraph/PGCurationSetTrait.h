@class NSSet;

@interface PGCurationSetTrait : PGCurationTrait

@property (readonly, nonatomic) NSSet *items;
@property (readonly, nonatomic) NSSet *negativeItems;

- (BOOL)isActive;
- (id)debugDescription;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 negativeItems:(id)a1;

@end
