@interface PGCurationPartOfDayTrait : PGCurationTrait

@property (readonly, nonatomic) unsigned long long value;

- (id)debugDescription;
- (char)isActive;
- (id)niceDescription;
- (id)initWithPartOfDay:(unsigned long long)a0;

@end
