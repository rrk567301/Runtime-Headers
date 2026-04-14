@class NSString, NSNumber;

@interface RKNearbyAudioDeviceRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSNumber *isPlaying;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)analyticsDescription;
- (id)initWithDeviceIdentifier:(id)a0 isPlaying:(id)a1;

@end
