@interface IMDeviceUtilities : NSObject

@property (class, readonly, nonatomic) char deviceIsLockedDown;
@property (class, readonly, nonatomic) char supportsDataDetectors;
@property (class, readonly, nonatomic) char supportsBusinessChat;
@property (class, readonly, nonatomic) char supportsSpotlight;
@property (class, readonly, nonatomic) char supportsSharedWithYou;
@property (class, readonly, nonatomic) char supportsFaceTime;
@property (class, readonly, nonatomic) char supportsNameAndPhoto;
@property (class, readonly, nonatomic) char supportsFocus;
@property (class, readonly, nonatomic) char supportsScreenEffects;
@property (class, nonatomic) char supportsiMessageJunk;
@property (class, readonly, nonatomic, getter=isInternalCarryDevice) char internalCarryDevice;
@property (class, readonly, nonatomic) char isSeedInstall;
@property (class, readonly, nonatomic) char isInternalInstall;
@property (class, readonly, nonatomic) char isMessagesInstalled;

+ (char)IMDeviceIsChinaRegion;
+ (char)IMDeviceIsIndiaRegion;
+ (char)IMSupportsASTC;
+ (char)IMDeviceIsGreenTea;
+ (char)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;
+ (char)IMSupportsUserNotifications;
+ (char)_completedSystemAppMigration;

@end
