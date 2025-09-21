@class NSString;

@interface PKTrustedDeviceEnrollmentInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceSerialNumber;
@property (retain, nonatomic) NSString *deviceUDID;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *secureElementIdentifier;
@property (nonatomic) char supportsAccessExpressMode;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
