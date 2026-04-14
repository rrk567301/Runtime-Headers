@class NSString;

@interface MUINotificationObserver : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id object;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleNotification:(id)a0;
- (id)initWithName:(id)a0 object:(id)a1 handler:(id /* block */)a2;

@end
