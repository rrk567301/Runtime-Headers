@class NSNumber;

@interface MTREnergyEVSEClusterEVNotDetectedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sessionID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *sessionDuration;
@property (copy, nonatomic) NSNumber *sessionEnergyCharged;
@property (copy, nonatomic) NSNumber *sessionEnergyDischarged;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
