@class NSString;

@interface CWFNearbyDeviceDiscoveryFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *receiverMacAddress;
@property (copy, nonatomic) NSString *transmitterMacAddress;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) long long numReports;
@property (nonatomic) long long frameType;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToNDDFilter:(id)a0;

@end
