@class NSNumber, NSString;

@interface CHIPIasAceClusterZoneStatusChangedParams : NSObject

@property (retain, nonatomic) NSNumber *zoneId;
@property (retain, nonatomic) NSNumber *zoneStatus;
@property (retain, nonatomic) NSNumber *audibleNotification;
@property (retain, nonatomic) NSString *zoneLabel;

- (id)init;
- (void).cxx_destruct;

@end
