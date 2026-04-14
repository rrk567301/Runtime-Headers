@interface PPNamedEntityAggScoreInputSet : PPBaseScoreInputSet

- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (unsigned long long)minScalarScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)undefinedScalarScoreIndex;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)undefinedArrayScoreIndex;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)objectScoreIndexUpperBound;
- (unsigned long long)undefinedObjectScoreIndex;

@end
