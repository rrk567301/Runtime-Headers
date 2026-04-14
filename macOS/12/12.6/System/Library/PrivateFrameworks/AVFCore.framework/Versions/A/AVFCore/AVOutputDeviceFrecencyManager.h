@interface AVOutputDeviceFrecencyManager : NSObject

+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (id)_frecentsWriter;
+ (id)_applicationSupportPath;
+ (id)_frecentsContainerPath;
+ (id)_frecentsFilePath;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;

@end
