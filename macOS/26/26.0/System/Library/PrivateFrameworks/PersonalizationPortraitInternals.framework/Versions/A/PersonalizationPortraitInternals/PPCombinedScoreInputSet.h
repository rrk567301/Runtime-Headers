@interface PPCombinedScoreInputSet : PPBaseScoreInputSet

- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)undefinedArrayScoreIndex;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)minScalarScoreIndex;
- (unsigned long long)objectScoreIndexUpperBound;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)minObjectScoreIndex;

@end
