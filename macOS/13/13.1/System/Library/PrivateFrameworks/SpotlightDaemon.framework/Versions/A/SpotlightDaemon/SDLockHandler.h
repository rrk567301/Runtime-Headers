@interface SDLockHandler : NSObject

+ (BOOL)migrationComplete;
+ (BOOL)unlockedSinceBoot;
+ (BOOL)deviceUnlocked;
+ (void)setupHandlerWithIndexQueue:(id)a0 pipelineOnly:(BOOL)a1 indexEnabled:(BOOL)a2 delegate:(id)a3;
+ (BOOL)deviceFirstUnlockedInMKB;
+ (BOOL)deviceFirstUnlockedInSB;
+ (void)_deviceLockSetup;

@end
