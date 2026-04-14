@interface SDLockHandler : NSObject

+ (BOOL)migrationComplete;
+ (BOOL)unlockedSinceBoot;
+ (BOOL)deviceUnlocked;
+ (void)_deviceLockSetup;
+ (BOOL)deviceFirstUnlockedInMKB;
+ (BOOL)deviceFirstUnlockedInSB;
+ (void)setupHandlerWithIndexQueue:(id)a0 pipelineOnly:(BOOL)a1 indexEnabled:(BOOL)a2 delegate:(id)a3;

@end
