@class _PASLock;

@interface PPBaseScoreInputSet : NSObject {
    _PASLock *_scalarMap;
    _PASLock *_arrayMap;
    _PASLock *_objectMap;
}

- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)minScalarScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)minArrayScoreIndex;
- (void).cxx_destruct;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (unsigned long long)scalarScoreIndexUpperBound;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)objectScoreIndexUpperBound;
- (unsigned long long)undefinedArrayScoreIndex;
- (id)init;
- (unsigned long long)indexForArrayScoreName:(id)a0;
- (unsigned long long)indexForObjectScoreName:(id)a0;
- (unsigned long long)indexForScalarScoreName:(id)a0;

@end
