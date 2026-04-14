@interface AVOutputDeviceFrecencyManager : NSObject

+ (id)_frecentsFilePath;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_applicationSupportPath;
+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (id)_frecentsWriter;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (id)_frecentsContainerPath;

@end
