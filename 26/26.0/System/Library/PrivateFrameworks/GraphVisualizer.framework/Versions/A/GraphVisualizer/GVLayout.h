@class GVGraph, NSMutableArray;

@interface GVLayout : NSObject {
    unsigned long long *savedOrder;
    unsigned long long currentCrossings;
}

@property (retain, nonatomic) GVGraph *graphOrig;
@property (retain, nonatomic) NSMutableArray *graphParts;
@property (retain, nonatomic) GVGraph *graphPart;
@property (nonatomic) int direction;
@property (nonatomic) struct CGSize { double width; double height; } separation;
@property (retain, nonatomic) NSMutableArray *ranks;

+ (struct CGSize { double x0; double x1; })layoutGraph:(id)a0 withDirection:(int)a1 separation:(struct CGSize { double x0; double x1; })a2;

- (void)dealloc;
- (void)render:(id)a0;
- (void)transpose;
- (void)initializeOrder;
- (void)medianPosition:(unsigned long long)a0;
- (void)initializeRanks;
- (void)weightedMedian:(unsigned long long)a0;
- (void)_locateCycles:(id)a0 visistedNodes:(id)a1 nodesInStack:(id)a2 reverseList:(id)a3;
- (void)assignCoordinates;
- (void)assignNodeCoordinates;
- (void)assignNodePriorities;
- (void)assignRankCoordinates;
- (void)assignRanks;
- (void)balanceRanks;
- (void)buildRankObjectArray;
- (void)clearNodeState;
- (void)commitOrder;
- (unsigned long long)crossings;
- (struct CGSize { double x0; double x1; })doLayout:(id)a0 direction:(int)a1 separation:(struct CGSize { double x0; double x1; })a2;
- (void)drawAllEdges:(id)a0 of:(id)a1;
- (void)drawAllGroups:(id)a0 of:(id)a1;
- (void)drawAllNodes:(id)a0 of:(id)a1;
- (void)initializeNodeCoordinates;
- (void)insertDummiesBetweenRanks;
- (void)makeFeasibleTree;
- (void)medianSort:(id)a0 withRespectTo:(id)a1;
- (unsigned long long)medianValueOf:(id)a0 withRespectTo:(id)a1;
- (void)minimizeCutValues;
- (void)orderVertices;
- (void)packCut:(unsigned long long)a0;
- (void)removeCycles;
- (void)restoreOrder;
- (void)saveOrder;
- (void)straighten;
- (void)undoRemoveCycles;

@end
