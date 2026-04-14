@class NSArray, NSMutableArray;

@interface GKGraphNode : NSObject <NSSecureCoding> {
    NSMutableArray *_connectedNodes;
    void *_cGraphNode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *connectedNodes;

+ (id)node;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)removeConnection:(id)a0;
- (float)estimatedCostToNode:(id)a0;
- (float)costToNode:(id)a0;
- (void *)cGraphNode;
- (void *)makeCGraphNode;
- (void)deleteCGraphNode;
- (id)mutConnectedNodes;
- (void)addConnection:(id)a0 bidirectional:(BOOL)a1;
- (void)addConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;
- (void)removeConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;
- (id)findPathToNode:(id)a0;
- (id)findPathFromNode:(id)a0;

@end
