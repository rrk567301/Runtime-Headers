@class NSNumber;

@interface CHIPIasAceClusterGetZoneStatusParams : NSObject

@property (retain, nonatomic) NSNumber *startingZoneId;
@property (retain, nonatomic) NSNumber *maxNumberOfZoneIds;
@property (retain, nonatomic) NSNumber *zoneStatusMaskFlag;
@property (retain, nonatomic) NSNumber *zoneStatusMask;

- (id)init;
- (void).cxx_destruct;

@end
