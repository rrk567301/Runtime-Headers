@class NSString;

@interface CWFNearbyDeviceDiscoveryFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *receiverMacAddress;
@property (copy, nonatomic) NSString *transmitterMacAddress;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) long long numReports;
@property (nonatomic) long long frameType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToNDDFilter:(id)a0;

@end
