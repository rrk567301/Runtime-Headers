@class SigningKey;

@interface TetraSigningKeyWrapper : NSObject

@property (retain) SigningKey *signingKey;

+ (id)generateKeyForTesting;

- (id)publicKey;
- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithSigningKey:(id)a0;
- (id)signDataWithMessageFormatter:(id)a0 error:(id *)a1;
- (id)signDataWithRegistrationFormatter:(id)a0 error:(id *)a1;

@end
