@class NSSet;

@interface PGCurationSetTrait : PGCurationTrait

@property (readonly, nonatomic) NSSet *items;
@property (readonly, nonatomic) NSSet *negativeItems;

- (id)initWithItems:(id)a0;
- (id)debugDescription;
- (BOOL)isActive;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 negativeItems:(id)a1;

@end
