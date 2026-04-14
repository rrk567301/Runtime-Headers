@class EGGraph, NSMutableArray, NSString;
@protocol EGElement, EGPortInterface, EGSourcePort;

@interface EGSubgraphPort : NSObject <EGElement, EGSourcePort, EGDestinationPort> {
    EGGraph *_parentGraph;
    id<EGSourcePort> _source;
}

@property (readonly, weak, nonatomic) EGGraph *parentGraph;
@property (readonly, nonatomic) id<EGPortInterface> portInterface;
@property (readonly, nonatomic) id<EGSourcePort> source;
@property (readonly, nonatomic) NSMutableArray *destinations;
@property (readonly, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<EGElement> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)registerSource:(id)a0;
- (void)setParentGraph:(id)a0;
- (void)registerDestination:(id)a0;

@end
