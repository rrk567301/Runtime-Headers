@class NSString;

@interface CRKConcreteStudentNotificationObservation : NSObject <CRKObservation>

@property (readonly, copy, nonatomic) NSString *notificationName;
@property (copy, nonatomic) id /* block */ notificationHandler;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotificationName:(id)a0 notificationHandler:(id /* block */)a1;
- (void)receiveNotificationWithName:(id)a0 userInfo:(id)a1;

@end
