@interface SecKeyRSAPublic : NSObject

@property (retain, nonatomic) id secKeyRef;

- (id)dataRepresentation;
- (id)initWithSecKeyRef:(id)a0;
- (id)encryptData:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
