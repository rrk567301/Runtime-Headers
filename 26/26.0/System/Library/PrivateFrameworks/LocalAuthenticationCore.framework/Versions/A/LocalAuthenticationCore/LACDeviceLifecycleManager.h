@class NSString;

@interface LACDeviceLifecycleManager : NSObject <LACDeviceLifecycleManaging>

@property (class, readonly, nonatomic) LACDeviceLifecycleManager *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rebootDeviceWithReason:(id)a0 completion:(id /* block */)a1;

@end
