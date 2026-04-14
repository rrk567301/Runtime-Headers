@class NSString, NSArray, NSData;

@interface PKEncryptedPaymentSetupFieldSubmissionContainer : NSObject

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) NSString *encryptionScheme;
@property (readonly, nonatomic) NSArray *encryptionCertificates;
@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) NSData *transactionId;

- (id)dataRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)_tlvRepresentation;
- (id)initWithValue:(id)a0 format:(unsigned long long)a1 scheme:(id)a2 certificates:(id)a3;

@end
