@interface PPCombinedScoreInputSet : PPBaseScoreInputSet

- (unsigned long long)arrayScoreIndexUpperBound;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)objectScoreIndexUpperBound;
- (unsigned long long)minScalarScoreIndex;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;

@end
