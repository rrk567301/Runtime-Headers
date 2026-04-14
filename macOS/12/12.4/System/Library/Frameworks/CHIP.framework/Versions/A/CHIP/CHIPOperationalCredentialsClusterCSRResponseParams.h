@class NSData;

@interface CHIPOperationalCredentialsClusterCSRResponseParams : NSObject

@property (retain, nonatomic) NSData *nocsrElements;
@property (retain, nonatomic) NSData *attestationSignature;

- (id)init;
- (void).cxx_destruct;

@end
