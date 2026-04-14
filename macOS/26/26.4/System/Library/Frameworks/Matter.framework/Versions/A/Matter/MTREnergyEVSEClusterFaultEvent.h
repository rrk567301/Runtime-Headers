@class NSNumber;

@interface MTREnergyEVSEClusterFaultEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sessionID;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *faultStatePreviousState;
@property (copy, nonatomic) NSNumber *faultStateCurrentState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
