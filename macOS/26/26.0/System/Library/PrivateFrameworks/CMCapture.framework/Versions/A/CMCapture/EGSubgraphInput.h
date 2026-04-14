@class NSArray, NSString, NSMutableArray;
@protocol EGElement, EGPortInterface, EGSourcePort;

@interface EGSubgraphInput : EGSubgraphPort <EGInputPort> {
    NSMutableArray *_downstreamNodeInputPorts;
}

@property (readonly, nonatomic) NSArray *downstreamNodeInputPorts;
@property (readonly, nonatomic) id<EGSourcePort> source;
@property (readonly, nonatomic) id<EGPortInterface> portInterface;
@property (readonly, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<EGElement> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (void)registerSource:(id)a0;
- (void)addDownstreamNodeInputPortsIntoArray:(id)a0;
- (void)registerDestination:(id)a0;

@end
