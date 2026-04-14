@class TransparencyManagedDataStore, NSData, TransparencySignatureVerifier, SignedObject, Signature;

@interface SignedObjectHolder : NSObject

@property (retain) SignedObject *signedObject;
@property NSData *object;
@property (readonly) BOOL hasSignature;
@property Signature *signature;
@property (retain) TransparencySignatureVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;

+ (id)parseFromData:(id)a0 error:(id *)a1;
+ (id)signedTypeWithObject:(id)a0 verifier:(id)a1 dataStore:(id)a2;
+ (id)signedTypeWithObject:(id)a0;

- (id)init;
- (id)data;
- (void).cxx_destruct;
- (unsigned long long)verifyWithError:(id *)a0;

@end
