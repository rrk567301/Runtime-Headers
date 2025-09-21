@class NSString, EGNode, NSMutableArray;
@protocol EGPortInterface, EGElement;

@interface EGOutput : NSObject <EGElement, EGOutputPort> {
    EGNode *_parentNode;
}

@property (readonly, nonatomic) int emittedCount;
@property (readonly, nonatomic) NSMutableArray *downstreamNodeInputPorts;
@property (readonly, nonatomic) NSMutableArray *destinations;
@property (readonly, nonatomic) id<EGPortInterface> portInterface;
@property (readonly, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<EGElement> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) EGOutput *upstreamNodeOutput;

+ (void)initialize;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)setParentNode:(id)a0;
- (void)emit:(id)a0;
- (void)registerConnectedInputPort:(id)a0;
- (void)registerDestination:(id)a0;

@end
