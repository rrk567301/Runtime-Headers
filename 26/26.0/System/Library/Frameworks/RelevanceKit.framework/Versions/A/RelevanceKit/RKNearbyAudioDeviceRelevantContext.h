@class NSString, NSNumber;

@interface RKNearbyAudioDeviceRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSNumber *isPlaying;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)analyticsDescription;
- (id)initWithDeviceIdentifier:(id)a0 isPlaying:(id)a1;

@end
