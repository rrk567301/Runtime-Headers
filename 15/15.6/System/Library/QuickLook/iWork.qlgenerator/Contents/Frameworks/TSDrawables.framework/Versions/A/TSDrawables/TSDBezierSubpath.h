@class TSUBezierPath, NSMutableArray, TSDBezierNode;

@interface TSDBezierSubpath : NSObject

@property (copy, nonatomic) NSMutableArray *nodes;
@property (nonatomic, getter=isClosed) char closed;
@property (readonly, nonatomic) char isRectangular;
@property (readonly, nonatomic) TSUBezierPath *bezierPath;
@property (readonly, nonatomic) TSDBezierNode *firstNode;
@property (readonly, nonatomic) TSDBezierNode *lastNode;
@property (readonly, nonatomic) char allNodesSelected;
@property (readonly, nonatomic) char hasSelectedNode;
@property (readonly, nonatomic) char canDeleteSelectedNodes;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } nodeBounds;
@property (readonly, nonatomic) char closeIfEndpointsAreEqual;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)addNode:(id)a0;
- (void)removeNode:(id)a0;
- (char)isCircular;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)sharpenAllNodes;
- (void)addNodesToArray:(id)a0;
- (void)appendToBezierPath:(id)a0;
- (void)appendToBezierPath:(id)a0 selectedNodesOnly:(char)a1 fromIndex:(unsigned long long)a2;
- (id)bezierNodeUnderPoint:(struct CGPoint { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 andTolerance:(double)a2 returningType:(long long *)a3;
- (void)convertToHobby;
- (void)deleteSelectedNodes;
- (double)distanceToPoint:(struct CGPoint { double x0; double x1; })a0 elementIndex:(unsigned long long *)a1 tValue:(double *)a2 threshold:(double)a3;
- (id)nodeAfterNode:(id)a0;
- (id)nodePriorToNode:(id)a0;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint { double x0; double x1; })a0;
- (void)offsetSelectedNodesByDelta:(struct CGPoint { double x0; double x1; })a0;
- (void)removeLastNode;
- (void)reverseDirection;
- (void)smoothNode:(id)a0;
- (void)updateReflectedState;
- (void)appendToBezierPath:(id)a0 selectedNodesOnly:(char)a1 fromIndex:(unsigned long long)a2 closed:(char)a3;
- (char)shouldChangePathToOpen:(long long)a0;
- (id)splitEdgeAtIndex:(unsigned long long)a0 atPercentage:(double)a1;

@end
