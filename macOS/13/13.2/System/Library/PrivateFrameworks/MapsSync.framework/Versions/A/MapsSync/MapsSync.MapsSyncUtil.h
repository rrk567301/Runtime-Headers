@interface MapsSync.MapsSyncUtil : NSObject

+ (id)userHomeDirectory;
+ (id)mapsContainerDataDirectory;
+ (id)mapsUserDirectory;
+ (id)mapsGroupDirectory;
+ (void)assertQueue:(id)a0 debug:(BOOL)a1;
+ (void)assertNotQueue:(id)a0 debug:(BOOL)a1;
+ (void)assertMainQueueWithDebug:(BOOL)a0;
+ (void)assertNotMainQueueWithDebug:(BOOL)a0;
+ (id)getApplicationIdentifier;
+ (BOOL)isMapsInstalled;

- (id)init;

@end
