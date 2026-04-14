@interface LegacySigningKeyPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)signData:(id)a0 error:(id *)a1;
- (id)publicKey;
- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
