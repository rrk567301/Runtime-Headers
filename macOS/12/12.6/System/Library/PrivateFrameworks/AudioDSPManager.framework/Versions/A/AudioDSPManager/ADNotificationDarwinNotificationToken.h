@class NSString;

@interface ADNotificationDarwinNotificationToken : NSObject

@property (readonly, nonatomic) NSString *notificationName;
@property (readonly, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 callback:(id /* block */)a1;

@end
