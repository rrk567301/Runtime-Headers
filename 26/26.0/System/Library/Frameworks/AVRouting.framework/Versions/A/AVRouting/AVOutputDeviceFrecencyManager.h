@interface AVOutputDeviceFrecencyManager : NSObject

+ (id)_frecentsFilePath;
+ (id)_applicationSupportPath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;
+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_frecentsContainerPath;
+ (id)_frecentsWriter;

@end
