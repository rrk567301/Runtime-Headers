@class NSNumber, NSData;

@interface CHIPDoorLockClusterGetLogRecordResponseParams : NSObject

@property (retain, nonatomic) NSNumber *logEntryId;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *eventType;
@property (retain, nonatomic) NSNumber *source;
@property (retain, nonatomic) NSNumber *eventIdOrAlarmCode;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSData *pin;

- (id)init;
- (void).cxx_destruct;

@end
