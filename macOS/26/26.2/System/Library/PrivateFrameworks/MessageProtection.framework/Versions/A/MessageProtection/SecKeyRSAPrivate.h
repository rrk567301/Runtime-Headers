@interface SecKeyRSAPrivate : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)publicKey;
- (id)dataRepresentation;
- (id)decryptData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
