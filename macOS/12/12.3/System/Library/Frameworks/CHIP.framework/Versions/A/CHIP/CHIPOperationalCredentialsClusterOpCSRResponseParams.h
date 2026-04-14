@class NSData;

@interface CHIPOperationalCredentialsClusterOpCSRResponseParams : NSObject

@property (retain, nonatomic) NSData *nocsrElements;
@property (retain, nonatomic) NSData *attestationSignature;

- (id)init;
- (void).cxx_destruct;

@end
