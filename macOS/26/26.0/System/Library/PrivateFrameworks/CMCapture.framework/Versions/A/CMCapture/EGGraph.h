@class EGSubgraphOutput, NSMutableDictionary, NSDictionary, NSString, NSMutableArray, EGSubgraphInput;
@protocol EGOutputPort, EGElement, EGInputPort;

@interface EGGraph : NSObject <EGElement, EGPortInterface> {
    EGGraph *_parentGraph;
    NSMutableDictionary *_nodes;
    NSMutableDictionary *_subgraphs;
}

@property (readonly, nonatomic) NSDictionary *egNodesByName;
@property (readonly, nonatomic) NSDictionary *egSubgraphsByName;
@property (readonly, nonatomic) NSMutableArray *egEdges;
@property (readonly, nonatomic) NSMutableDictionary *egSubgraphInputsByName;
@property (readonly, nonatomic) NSMutableDictionary *egSubgraphOutputsByName;
@property (readonly, nonatomic) EGSubgraphInput *egSubgraphInput;
@property (readonly, nonatomic) EGSubgraphOutput *egSubgraphOutput;
@property (readonly, weak, nonatomic) EGGraph *parentGraph;
@property (readonly, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<EGElement> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *egInputPortsByName;
@property (readonly, nonatomic) NSDictionary *egOutputPortsByName;
@property (readonly, nonatomic) id<EGInputPort> egInputPort;
@property (readonly, nonatomic) id<EGOutputPort> egOutputPort;

+ (void)initialize;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)setParentGraph:(id)a0;
- (id)subgraphInputInstalledWithName:(id)a0;
- (BOOL)connectExternalSubgraphInput:(id)a0 toInternalInput:(id)a1;
- (BOOL)connectExternalSubgraphOutput:(id)a0 toInternalOutput:(id)a1;
- (BOOL)connectOutput:(id)a0 toInput:(id)a1;
- (void)installNode:(id)a0;
- (void)installSubgraph:(id)a0;
- (id)subgraphInputInstalledFromInternalInput:(id)a0;
- (id)subgraphInputInstalledFromInternalInput:(id)a0 withName:(id)a1;
- (id)subgraphOutputInstalledFromInternalOutput:(id)a0;
- (id)subgraphOutputInstalledFromInternalOutput:(id)a0 withName:(id)a1;
- (id)subgraphOutputInstalledWithName:(id)a0;

@end
