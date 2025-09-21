@class SigningPublicKey;

@interface TetraPublicSigningKeyWrapper : NSObject

@property (retain) SigningPublicKey *signingKey;

- (id)compactRepresentation;
- (void).cxx_destruct;
- (id)lookupIdentifier;
- (id)initWithCompactRepresentation:(id)a0;
- (id)initWithSigningPublicKey:(id)a0;
- (BOOL)verifyTetraMessageSignature:(id)a0 formatter:(id)a1;
- (BOOL)verifyTetraRegistrationSignature:(id)a0 formatter:(id)a1;

@end
