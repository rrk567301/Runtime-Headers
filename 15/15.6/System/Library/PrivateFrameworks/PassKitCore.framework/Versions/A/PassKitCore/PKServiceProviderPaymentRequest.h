@class PKServiceProviderOrder, NSString;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKServiceProviderOrder *serviceProviderOrder;
@property (readonly, copy, nonatomic) NSString *targetDeviceSerialNumber;

+ (id)availableNetworks;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)merchantIdentifier;
- (id)initWithServiceProviderOrder:(id)a0;
- (id)initWithServiceProviderOrder:(id)a0 targetDeviceSerialNumber:(id)a1;

@end
