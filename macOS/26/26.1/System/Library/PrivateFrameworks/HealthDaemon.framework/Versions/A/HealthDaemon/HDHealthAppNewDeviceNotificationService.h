@class IDSService, NSString;

@interface HDHealthAppNewDeviceNotificationService : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *notificationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)sendNewDeviceNotificationWithMessageKind:(long long)a0 error:(id *)a1;

@end
