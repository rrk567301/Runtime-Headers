@class NSNumber;

@interface MTREnergyEVSEClusterEnergyTransferStartedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sessionID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *maximumCurrent;
@property (copy, nonatomic) NSNumber *maximumDischargeCurrent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
