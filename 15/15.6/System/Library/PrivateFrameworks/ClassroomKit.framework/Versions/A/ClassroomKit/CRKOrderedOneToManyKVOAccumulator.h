@class NSString, NSMapTable, CRKPointerSet, NSObject, NSMutableArray;
@protocol CRKOrderedOneToManyKVOAccumulatorDelegate;

@interface CRKOrderedOneToManyKVOAccumulator : NSObject {
    CRKPointerSet *mInsertedObjects;
    CRKPointerSet *mReplacementObjects;
    NSMapTable *mIndexForDeletedObject;
    NSMapTable *mOriginalIndexOfMovedObject;
    NSMutableArray *mObservedShadow;
    long long mInitialArrayCount;
}

@property (readonly, nonatomic) char hasChanges;
@property (copy, nonatomic) NSString *observedKeyPath;
@property (weak, nonatomic) NSObject *observedObject;
@property (weak, nonatomic) id<CRKOrderedOneToManyKVOAccumulatorDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObject:(id)a0 keyPath:(id)a1;
- (void)_drain;
- (char)_integrateChange:(id)a0 toArray:(id)a1;
- (unsigned long long)_prestateIndexForImmediateIndex:(unsigned long long)a0;
- (id)_resultsToArriveAtArray:(id)a0;
- (void)_validateArrayChangeToFinalCount:(long long)a0 accumulatedResults:(id)a1;

@end
