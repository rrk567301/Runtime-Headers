@interface CloudTabServices : NSObject

+ (id)_serverConnection;
+ (void)clearTabsForCurrentDevice;
+ (void)didToggleCloudTabs:(BOOL)a0 terminateAfterUpdating:(BOOL)a1;
+ (void)clearAllCloudTabDevices;
+ (void)didToggleCloudTabs:(BOOL)a0;

@end
