@interface MSPSharedTripXPCPeer : NSObject

@property (readonly, nonatomic) char canControlSharing;
@property (readonly, nonatomic) char canControlReceiving;

- (id)initWithConnection:(id)a0;

@end
