@class NSString;

@interface TFInterprocessNotificationCallback : NSObject

@property (copy, nonatomic) NSString *notificationName;
@property (readonly, nonatomic) id /* block */ callback;

- (void)dealloc;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
