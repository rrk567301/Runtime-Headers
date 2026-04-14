@class NSNumber, NSData, NSString;

@interface CHIPDoorLockClusterProgrammingEventNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *programEventSource;
@property (retain, nonatomic) NSNumber *programEventCode;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSData *pin;
@property (retain, nonatomic) NSNumber *userType;
@property (retain, nonatomic) NSNumber *userStatus;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSString *data;

- (id)init;
- (void).cxx_destruct;

@end
