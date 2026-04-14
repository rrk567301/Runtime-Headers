@interface AVOutputDeviceFrecencyManager : NSObject

+ (id)_frecentsWriter;
+ (id)_frecentsFilePath;
+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (id)_applicationSupportPath;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;
+ (id)_frecentsContainerPath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;

@end
