@class NSArray, NSString, PKContactInformation, PKExternalProvisioningOptions, PKProvisioningSupportData, NSDictionary;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse <NSSecureCoding> {
    NSDictionary *_encryptedSupportDataDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *downloadablePasses;
@property (readonly, copy, nonatomic) NSArray *moreInfoURLs;
@property (readonly, nonatomic) PKContactInformation *idmsContactInformation;
@property (readonly, nonatomic) NSString *nonce;
@property (readonly, copy, nonatomic) PKExternalProvisioningOptions *externalProvisioningOptions;
@property (readonly, nonatomic) PKProvisioningSupportData *encryptedProvisioningSupportData;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)supportDataRepresentationWithSID:(id)a0;

@end
