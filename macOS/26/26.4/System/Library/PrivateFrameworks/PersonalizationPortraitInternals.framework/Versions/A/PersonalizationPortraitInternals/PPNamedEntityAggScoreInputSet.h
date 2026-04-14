@interface PPNamedEntityAggScoreInputSet : PPBaseScoreInputSet

- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (unsigned long long)objectScoreIndexUpperBound;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)minScalarScoreIndex;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)undefinedObjectScoreIndex;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)minArrayScoreIndex;

@end
