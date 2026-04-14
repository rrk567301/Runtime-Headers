@protocol P256PublicKeyProtocol;

@interface PublicKey : NSObject

@property (retain) id<P256PublicKeyProtocol> key;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)initWithKey:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;

@end
