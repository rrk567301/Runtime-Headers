@class GVGraph, NSMutableArray;

@interface GVLayout : NSObject {
    unsigned long long *savedOrder;
    unsigned long long currentCrossings;
}

@property (nonatomic) GVGraph *graph;
@property (nonatomic) int direction;
@property (nonatomic) struct CGSize { double width; double height; } separation;
@property (retain, nonatomic) NSMutableArray *selfEdges;
@property (retain, nonatomic) NSMutableArray *ranks;

+ (struct CGSize { double x0; double x1; })layoutGraph:(id)a0 withDirection:(int)a1 separation:(struct CGSize { double x0; double x1; })a2;

- (void)dealloc;
- (void)transpose;
- (struct CGSize { double x0; double x1; })doLayout:(id)a0 direction:(int)a1 separation:(struct CGSize { double x0; double x1; })a2;
- (void)removeSelfEdges;
- (void)undoRemoveSelfEdges;
- (void)_removeCycleDFS:(id)a0 visistedNodes:(id)a1 nodesInStack:(id)a2;
- (void)removeCycles;
- (void)undoRemoveCycles;
- (void)assignRanks;
- (void)initializeRanks;
- (void)makeFeasibleTree;
- (void)minimizeCutValues;
- (void)normalizeRanks;
- (void)balanceRanks;
- (void)buildRankIterators;
- (void)orderVertices;
- (unsigned long long)crossings;
- (void)saveOrder;
- (void)restoreOrder;
- (void)commitOrder;
- (void)initializeOrder;
- (unsigned long long)medianValueOf:(id)a0 withRespectTo:(id)a1;
- (void)medianSort:(id)a0 withRespectTo:(id)a1;
- (void)weightedMedian:(unsigned long long)a0;
- (void)assignCoordinates;
- (void)assignNodePriorities;
- (void)initializeNodeCoordinates;
- (void)medianPosition:(unsigned long long)a0;
- (void)packCutX:(unsigned long long)a0;
- (void)packCutY:(unsigned long long)a0;
- (void)straightenX;
- (void)straightenY;
- (void)assignNodeCoordinates;
- (void)assignRankCoordinates;

@end
