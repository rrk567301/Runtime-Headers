@interface PGMeaningfulEventTrait : NSObject

@property (nonatomic) double minimumScore;
@property (readonly, nonatomic) char isMatchingRequired;
@property (readonly, nonatomic) char isActive;

- (id)debugDescription;
- (id)init;
- (char)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (char)isMatchingRequired;

@end
