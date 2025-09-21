@class NSString, NSNumber;

@interface ULDarwinNotificationRecord : NSObject

@property (retain, nonatomic) NSString *notificationName;
@property (retain, nonatomic) NSNumber *registrationToken;
@property (copy, nonatomic) id /* block */ handler;

- (id)initWithNotificationName:(id)a0 registrationToken:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;

@end
