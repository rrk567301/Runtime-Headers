@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) int processIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)auditToken;
- (id)initWithConnection:(id)a0;
- (char)isEntitled;
- (void)clearConnection;

@end
