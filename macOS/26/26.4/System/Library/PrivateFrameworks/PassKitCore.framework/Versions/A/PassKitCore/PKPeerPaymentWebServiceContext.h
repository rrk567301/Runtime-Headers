@class NSURL, NSString, NSData;

@interface PKPeerPaymentWebServiceContext : PKWebServiceContext

@property (readonly, copy) NSURL *serviceURL;
@property (readonly, copy) NSString *deviceIdentifier;
@property (readonly, copy) NSString *pushTopic;
@property (copy) NSString *pushToken;
@property BOOL devSigned;
@property (readonly, copy) NSString *companionSerialNumber;
@property (copy) NSData *signedEnrollmentDataSignature;

+ (BOOL)supportsSecureCoding;
+ (id)contextWithArchive:(id)a0;

- (void)updateContextWithDeviceRegistrationData:(id)a0 registrationResponse:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
