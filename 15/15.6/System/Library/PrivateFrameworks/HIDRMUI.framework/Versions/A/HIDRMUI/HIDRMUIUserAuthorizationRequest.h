@class NSString, NSObject;
@protocol OS_os_log;

@interface HIDRMUIUserAuthorizationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char requiresPairing;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (copy, nonatomic) NSString *deviceName;

+ (id)requestWithDeviceName:(id)a0 requiresPairing:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceName:(id)a0 requiresPairing:(char)a1;

@end
