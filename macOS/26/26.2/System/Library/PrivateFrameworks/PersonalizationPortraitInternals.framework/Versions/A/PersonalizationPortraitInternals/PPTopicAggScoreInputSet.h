@interface PPTopicAggScoreInputSet : PPBaseScoreInputSet

- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)minScalarScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)minArrayScoreIndex;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (unsigned long long)scalarScoreIndexUpperBound;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)objectScoreIndexUpperBound;
- (unsigned long long)undefinedArrayScoreIndex;

@end
