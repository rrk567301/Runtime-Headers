@class NSString, PKOSVersionRequirement;

@interface PKDeviceSharingCapabilities : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *deviceRegion;
@property (nonatomic) BOOL supportsManatee;
@property (retain, nonatomic) PKOSVersionRequirement *fromDeviceVersion;

+ (id)deviceSharingCapbilitesRequestWithProtobuf:(id)a0;

- (id)protobuf;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
