@class NSNumber;

@interface CHIPIasZoneClusterZoneStatusChangeNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *zoneStatus;
@property (retain, nonatomic) NSNumber *extendedStatus;
@property (retain, nonatomic) NSNumber *zoneId;
@property (retain, nonatomic) NSNumber *delay;

- (id)init;
- (void).cxx_destruct;

@end
