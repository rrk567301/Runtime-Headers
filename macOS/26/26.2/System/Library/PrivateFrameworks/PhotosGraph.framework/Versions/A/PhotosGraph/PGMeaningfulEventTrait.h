@interface PGMeaningfulEventTrait : NSObject

@property (nonatomic) double minimumScore;
@property (readonly, nonatomic) BOOL isMatchingRequired;
@property (readonly, nonatomic) BOOL isActive;

- (BOOL)isActive;
- (id)debugDescription;
- (id)init;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (BOOL)isMatchingRequired;

@end
