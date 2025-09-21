@interface CloudTabServices : NSObject

+ (id)_serverConnection;
+ (void)clearTabsForCurrentDevice;
+ (void)clearAllCloudTabDevices;
+ (void)didToggleCloudTabs:(char)a0;
+ (void)didToggleCloudTabs:(char)a0 terminateAfterUpdating:(char)a1;

@end
