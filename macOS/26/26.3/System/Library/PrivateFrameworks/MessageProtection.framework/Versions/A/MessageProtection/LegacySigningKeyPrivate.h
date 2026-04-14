@interface LegacySigningKeyPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (id)signData:(id)a0 error:(id *)a1;
- (id)init;
- (id)publicKey;
- (void).cxx_destruct;

@end
