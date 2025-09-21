@class NSArray, NSData, NSDate;

@interface MSDecodeOptions : NSObject

@property char verifySignatures;
@property char verifySigners;
@property char verifyTimestamps;
@property (retain) NSArray *signerPolicies;
@property (retain) NSDate *verifyTime;
@property struct __SecIdentity { } *identity;
@property (retain) NSData *key;
@property (retain) NSData *LAContext;
@property (retain) NSArray *additionalCertificates;
@property (retain) NSArray *anchorCertificates;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDecryptionIdentity:(struct __SecIdentity { } *)a0;
- (id)initWithDecryptionKey:(id)a0;

@end
