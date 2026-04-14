@interface PPTopicAggScoreInputSet : PPBaseScoreInputSet

- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)objectScoreIndexUpperBound;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (unsigned long long)minArrayScoreIndex;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)minScalarScoreIndex;

@end
