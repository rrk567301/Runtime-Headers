@class NSNumber, NSString;

@interface CHIPMessagingClusterDisplayMessageParams : NSObject

@property (retain, nonatomic) NSNumber *messageId;
@property (retain, nonatomic) NSNumber *messageControl;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *durationInMinutes;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSNumber *optionalExtendedMessageControl;

- (id)init;
- (void).cxx_destruct;

@end
