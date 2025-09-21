@class NSString;

@interface CWFNearbyDeviceDiscoveryFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *receiverMacAddress;
@property (copy, nonatomic) NSString *transmitterMacAddress;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) long long numReports;
@property (nonatomic) long long frameType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToNDDFilter:(id)a0;

@end
