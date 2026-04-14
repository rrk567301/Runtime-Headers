@interface LegacySigningKeyPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)publicKey;
- (id)dataRepresentation;
- (id)signData:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
