@class NSArray, NSMutableSet, CRGGroup, NSMutableArray;

@interface CRGGraph : NSObject {
    CRGGroup *_group;
    NSArray *_allPortsCache;
    NSMutableArray *_externalOutputs;
    NSMutableArray *_connections;
}

@property (readonly, nonatomic) NSMutableSet *nodes;

- (int)prepare;
- (BOOL)compile;
- (void).cxx_destruct;
- (void)_lock;
- (id)initWithGroup:(id)a0;
- (void)dumpConnections;
- (BOOL)_collectNodes;
- (BOOL)_resolvePixelFormats;
- (BOOL)_resolvePortDimensions;
- (BOOL)_verifyNodes;
- (id)describeAsDOT;
- (id)getAllPorts;
- (id)getConnections;
- (id)getExternalOutputs;
- (id)getNodesInDependecyOrder;

@end
