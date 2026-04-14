@class NSData;

@interface SecOfferedPAKEIdentity : NSObject

@property (retain) NSData *client_identity;
@property (retain) NSData *server_identity;
@property unsigned short pake_scheme;

- (void).cxx_destruct;
- (id)initWithClientIdentity:(id)a0 :(id)a1 :(unsigned short)a2;

@end
