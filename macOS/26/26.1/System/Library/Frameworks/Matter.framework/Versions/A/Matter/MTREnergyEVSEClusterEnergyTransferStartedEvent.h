@class NSNumber;

@interface MTREnergyEVSEClusterEnergyTransferStartedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sessionID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *maximumCurrent;
@property (copy, nonatomic) NSNumber *maximumDischargeCurrent;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
