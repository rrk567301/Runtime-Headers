@class NSData;

@interface CHIPOperationalCredentialsClusterAttestationResponseParams : NSObject

@property (retain, nonatomic) NSData *attestationElements;
@property (retain, nonatomic) NSData *signature;

- (id)init;
- (void).cxx_destruct;

@end
