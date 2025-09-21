@class NSString, NSArray, NSDate;

@interface CWFNearbyDeviceDiscoveryReport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSString *receiver;
@property (copy, nonatomic) NSString *transmitter;
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSArray *rssi;
@property (nonatomic) long long frameType;
@property (nonatomic) long long bandwidth;
@property (nonatomic) long long channel;
@property (nonatomic) long long band;
@property (nonatomic) long long rateMbps;
@property (nonatomic) char isLowConfidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToNDDReport:(id)a0;

@end
