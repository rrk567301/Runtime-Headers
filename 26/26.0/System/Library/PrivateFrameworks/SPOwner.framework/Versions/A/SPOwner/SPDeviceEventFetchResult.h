@class NSDictionary;

@interface SPDeviceEventFetchResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *beaconEventByBeaconIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResults:(id)a0;
- (void).cxx_destruct;

@end
