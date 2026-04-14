@class NSNumber, NSData, NSString;

@interface CHIPDoorLockClusterOperatingEventNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *operationEventSource;
@property (retain, nonatomic) NSNumber *operationEventCode;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSData *pin;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSString *data;

- (id)init;
- (void).cxx_destruct;

@end
