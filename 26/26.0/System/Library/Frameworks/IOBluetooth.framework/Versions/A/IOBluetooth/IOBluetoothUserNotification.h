@class NSString;

@interface IOBluetoothUserNotification : NSObject <IOBluetoothCoreBluetoothCoordinatorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unregister;
- (id)init;

@end
