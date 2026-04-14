@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) int processIdentifier;

- (BOOL)isEntitled;
- (void)clearConnection;
- (id)auditToken;
- (id)description;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;

@end
