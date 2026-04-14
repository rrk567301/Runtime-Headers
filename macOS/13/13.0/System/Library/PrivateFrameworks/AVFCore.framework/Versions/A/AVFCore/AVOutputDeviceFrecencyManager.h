@interface AVOutputDeviceFrecencyManager : NSObject

+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_applicationSupportPath;
+ (id)_frecentsContainerPath;
+ (id)_frecentsFilePath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;
+ (id)_frecentsWriter;

@end
