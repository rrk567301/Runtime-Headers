@interface PGMeaningfulEventLocationMobilityTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) unsigned long long value;

- (char)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (id)initWithMobility:(unsigned long long)a0;

@end
