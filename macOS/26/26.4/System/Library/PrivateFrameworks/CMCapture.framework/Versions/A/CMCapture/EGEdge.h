@protocol EGDestinationPort, EGSourcePort;

@interface EGEdge : NSObject

@property (readonly, nonatomic) id<EGSourcePort> sourcePort;
@property (readonly, nonatomic) id<EGDestinationPort> destinationPort;

+ (void)initialize;

- (id)initWithSource:(id)a0 destination:(id)a1;
- (id)description;
- (void)dealloc;

@end
