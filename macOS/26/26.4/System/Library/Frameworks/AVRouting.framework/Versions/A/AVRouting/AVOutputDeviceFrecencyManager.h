@interface AVOutputDeviceFrecencyManager : NSObject

+ (id)_applicationSupportPath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;
+ (id)_frecentsFilePath;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_frecentsWriter;
+ (id)_frecentsContainerPath;
+ (void)updateFrecencyListForDeviceID:(id)a0;

@end
