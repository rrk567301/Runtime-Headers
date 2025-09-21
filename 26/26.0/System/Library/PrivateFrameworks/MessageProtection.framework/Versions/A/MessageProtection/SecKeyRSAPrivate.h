@interface SecKeyRSAPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)publicKey;
- (id)init;
- (id)decryptData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
