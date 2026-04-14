@interface SecKeyRSAPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentation;
- (id)decryptData:(id)a0 error:(id *)a1;
- (id)init;
- (id)publicKey;
- (void).cxx_destruct;

@end
