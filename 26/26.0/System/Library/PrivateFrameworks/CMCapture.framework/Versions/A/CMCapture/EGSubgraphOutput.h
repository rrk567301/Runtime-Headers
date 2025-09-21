@class NSArray, EGOutput, NSString;
@protocol EGPortInterface, EGElement;

@interface EGSubgraphOutput : EGSubgraphPort <EGOutputPort> {
    EGOutput *_upstreamNodeOutput;
}

@property (readonly, nonatomic) EGOutput *upstreamNodeOutput;
@property (readonly, nonatomic) NSArray *destinations;
@property (readonly, nonatomic) id<EGPortInterface> portInterface;
@property (readonly, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<EGElement> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)registerSource:(id)a0;
- (void)registerDestination:(id)a0;

@end
