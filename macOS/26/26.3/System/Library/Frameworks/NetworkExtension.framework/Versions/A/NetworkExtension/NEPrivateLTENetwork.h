@class NSString;

@interface NEPrivateLTENetwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *mobileCountryCode;
@property (copy) NSString *mobileNetworkCode;
@property (copy) NSString *trackingAreaCode;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
