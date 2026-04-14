@interface AVOutputDeviceFrecencyManager : NSObject

+ (id)_frecentsContainerPath;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_frecentsFilePath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (id)_frecentsWriter;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;
+ (id)_applicationSupportPath;

@end
