@interface PGMeaningfulEventLocationMobilityTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) unsigned long long value;

- (BOOL)isActive;
- (id)initWithMobility:(unsigned long long)a0;
- (id)debugDescriptionWithMomentNode:(id)a0;

@end
