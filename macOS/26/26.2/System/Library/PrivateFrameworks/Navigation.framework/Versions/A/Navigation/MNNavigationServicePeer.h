@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) int processIdentifier;

- (void)clearConnection;
- (id)auditToken;
- (BOOL)isEntitled;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
