@class NSString;

@interface PCSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (char)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (char)careAboutAccount:(id)a0;
- (id)escrowURL:(id)a0;
- (id)iCloudEnvironmentForAccount:(id)a0;
- (void)setupAccount:(id)a0 reason:(id)a1 optional:(char)a2;

@end
