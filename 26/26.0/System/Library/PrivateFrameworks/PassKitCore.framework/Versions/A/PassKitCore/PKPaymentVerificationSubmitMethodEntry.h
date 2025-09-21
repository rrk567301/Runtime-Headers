@class NSString, NSDictionary, NSData, PKPaymentTapToProvisionData;

@interface PKPaymentVerificationSubmitMethodEntry : NSObject

@property (copy, nonatomic) NSString *methodGroupIdentifier;
@property (copy, nonatomic) NSString *methodIdentifier;
@property (copy, nonatomic) NSString *verificationCode;
@property (copy, nonatomic) NSData *verificationData;
@property (retain, nonatomic) PKPaymentTapToProvisionData *tapToProvisionData;
@property (copy, nonatomic) NSDictionary *dynamicFieldParameters;
@property (copy, nonatomic) NSDictionary *encryptedDynamicFieldParameters;
@property (copy, nonatomic) NSDictionary *encryptedPerFieldDynamicFieldParameters;

- (void).cxx_destruct;
- (id)dictionaryRepresentationWithBuilder:(id)a0;

@end
