@class MCNearbyDiscoveryPeerConnection, NSNetService, NSMutableArray, MCPeerID;

@interface MCNearbyDiscoveryPeer : NSObject

@property (retain, nonatomic) NSMutableArray *sendDataBuffer;
@property (retain, nonatomic) MCNearbyDiscoveryPeerConnection *connection;
@property (copy, nonatomic) MCPeerID *peerID;
@property (nonatomic) int state;
@property (retain, nonatomic) NSNetService *netService;
@property (retain, nonatomic) MCNearbyDiscoveryPeerConnection *trialConnection;

- (void)closeConnection;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)description;
- (id)stringForState:(int)a0;
- (void)flushDataBuffer;
- (void)sendData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithPeerID:(id)a0;
- (void)attachConnection:(id)a0;

@end
