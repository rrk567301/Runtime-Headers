@class NSDate;
@protocol NSObject;

@interface ADNotificationEvent : NSObject

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) id<NSObject> payload;

- (void).cxx_destruct;
- (id)initWithTimestamp:(id)a0;

@end
