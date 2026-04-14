@class NSString, NSDictionary, NSData;

@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *authorizationHeader;
@property (copy, nonatomic) NSString *signedAuthToken;
@property (copy, nonatomic) NSDictionary *enrollmentData;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;
@property (nonatomic) BOOL devSigned;
@property (copy, nonatomic) NSString *companionSerialNumber;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPeerPaymentDeviceRegistrationData:(id)a0;

@end
