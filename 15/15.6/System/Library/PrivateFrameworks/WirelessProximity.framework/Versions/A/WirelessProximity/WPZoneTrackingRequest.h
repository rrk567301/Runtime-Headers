@class NSMutableSet;

@interface WPZoneTrackingRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned char clientType;
@property struct { long long screenOnInterval; long long screenOffInterval; long long window; } scanningRates;
@property char scanWhenScreenOff;
@property (retain) NSMutableSet *zones;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
