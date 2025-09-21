@class PKPaymentRequest, NSString, PKRemoteDevice;

@interface PKRemotePaymentRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKRemoteDevice *device;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (copy, nonatomic) NSString *selectedApplicationIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long selectedPaymentMethodType;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 identifier:(id)a1;
- (char)isEqualToRemoteRequest:(id)a0;

@end
