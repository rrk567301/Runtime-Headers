@protocol P256PublicKeyProtocol;

@interface PublicKey : NSObject

@property (retain) id<P256PublicKeyProtocol> key;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;

@end
