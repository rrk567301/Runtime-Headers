@class NSNumber;

@interface CHIPIasAceClusterGetPanelStatusResponseParams : NSObject

@property (retain, nonatomic) NSNumber *panelStatus;
@property (retain, nonatomic) NSNumber *secondsRemaining;
@property (retain, nonatomic) NSNumber *audibleNotification;
@property (retain, nonatomic) NSNumber *alarmStatus;

- (id)init;
- (void).cxx_destruct;

@end
