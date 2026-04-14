@class SigningKey;

@interface TetraSigningKeyWrapper : NSObject

@property (retain) SigningKey *signingKey;

+ (id)generateKeyForTesting;

- (id)signDataWithFormatter:(id)a0 error:(id *)a1;
- (id)publicKey;
- (void).cxx_destruct;
- (id)initWithSigningKey:(id)a0;
- (id)signDataWithMessageFormatter:(id)a0 error:(id *)a1;
- (id)signDataWithRegistrationFormatter:(id)a0 error:(id *)a1;

@end
