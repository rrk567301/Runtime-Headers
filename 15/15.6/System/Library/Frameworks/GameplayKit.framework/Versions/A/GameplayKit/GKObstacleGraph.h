@class NSArray, NSMutableArray;

@interface GKObstacleGraph : GKGraph {
    NSMutableArray *_sourceObstacles;
    void *_cObstacleGraph;
    Class _nodeClass;
}

@property (readonly, nonatomic) NSArray *obstacles;
@property (readonly, nonatomic) float bufferRadius;

+ (char)supportsSecureCoding;
+ (id)graphWithObstacles:(id)a0 bufferRadius:(float)a1;
+ (id)graphWithObstacles:(id)a0 bufferRadius:(float)a1 nodeClass:(Class)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)nodeClass;
- (id)initWithObstacles:(id)a0 bufferRadius:(float)a1;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)a0;
- (void)addObstacles:(id)a0;
- (void *)cObstacleGraph;
- (void)connectNodeUsingObstacles:(id)a0;
- (void)connectNodeUsingObstacles:(id)a0 ignoringBufferRadiusOfObstacles:(id)a1;
- (void)connectNodeUsingObstacles:(id)a0 ignoringObstacles:(id)a1;
- (id)initWithObstacles:(id)a0 bufferRadius:(float)a1 nodeClass:(Class)a2;
- (char)isConnectionLockedFromNode:(id)a0 toNode:(id)a1;
- (void)lockConnectionFromNode:(id)a0 toNode:(id)a1;
- (void *)makeCGraph;
- (id)mutObstacles;
- (id)nodesForObstacle:(id)a0;
- (void)removeAllObstacles;
- (void)removeObstacles:(id)a0;
- (void)unlockConnectionFromNode:(id)a0 toNode:(id)a1;

@end
