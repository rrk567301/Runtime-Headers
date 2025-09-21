@class NSString, NSDictionary, NSData;

@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *authorizationHeader;
@property (copy, nonatomic) NSString *signedAuthToken;
@property (copy, nonatomic) NSDictionary *enrollmentData;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;
@property (nonatomic) char devSigned;
@property (copy, nonatomic) NSString *companionSerialNumber;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToPeerPaymentDeviceRegistrationData:(id)a0;

@end
