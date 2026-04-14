@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) int processIdentifier;

- (id)auditToken;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEntitled;
- (id)description;
- (void)clearConnection;

@end
