@class NSNumber;

@interface MTREnergyEVSEClusterFaultEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sessionID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *faultStatePreviousState;
@property (copy, nonatomic) NSNumber *faultStateCurrentState;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
