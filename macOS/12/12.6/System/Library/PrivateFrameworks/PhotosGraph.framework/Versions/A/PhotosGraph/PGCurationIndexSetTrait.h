@class NSDictionary, NSIndexSet;

@interface PGCurationIndexSetTrait : PGCurationTrait

@property (retain, nonatomic) NSDictionary *thresholdByIdentifier;
@property (readonly, nonatomic) NSIndexSet *indexSet;
@property (nonatomic) unsigned long long targetNumberOfMatches;

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)initWithIndexSet:(id)a0;
- (id)niceDescription;
- (double)thresholdForSceneIdentifier:(unsigned int)a0;

@end
