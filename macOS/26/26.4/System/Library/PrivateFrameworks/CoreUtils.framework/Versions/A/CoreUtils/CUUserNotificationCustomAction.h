@class UNNotificationAction;

@interface CUUserNotificationCustomAction : NSObject

@property (retain, nonatomic) UNNotificationAction *action;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long index;

- (void).cxx_destruct;

@end
