@class NSArray, NSMutableArray, SiriUIIntArray2D;
@protocol EditScriptData;

@interface SiriUIEditScript : NSObject {
    BOOL _orderAtomsAscending;
    SiriUIIntArray2D *_distanceMatrix;
    long long _currentOperation;
    id<EditScriptData> _itemAData;
    id<EditScriptData> _itemBData;
}

@property (copy, nonatomic) NSArray *operationPrecedenceArray;
@property (retain, nonatomic) NSMutableArray *script;

- (id)description;
- (void).cxx_destruct;
- (id)operationPrecedenceArrayFromOperationPrecedence:(long long)a0;
- (id)initWithOperationPrecedence:(long long)a0 orderAtomsAscending:(BOOL)a1;
- (void)computeDistanceMatrix;
- (void)computeEditsFromMatrix;
- (void)initializeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)a0 editIndex:(unsigned long long)a1 newText:(id)a2 indexInArrayB:(unsigned long long)a3;
- (void)finalizeCurrentScriptAtom;

@end
