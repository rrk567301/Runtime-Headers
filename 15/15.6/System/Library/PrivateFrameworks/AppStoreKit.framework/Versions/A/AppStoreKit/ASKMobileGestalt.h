@class NSString;

@interface ASKMobileGestalt : NSObject

@property (class, readonly) char hasSystemTelephonyOfAnyKind;
@property (class, readonly) char hasVenice;
@property (class, readonly) char wapiCapability;
@property (class, readonly) NSString *deviceClass;
@property (class, readonly) NSString *productType;
@property (class, readonly) char hasHEVCDecoding;
@property (class, readonly) char isCharonSupported;
@property (class, readonly) char isMandrakeSupported;
@property (class, readonly) char isChinaSKUDevice;
@property (class, readonly) char isStandaloneWatch;
@property (class, readonly) char isAppleSiliconMac;
@property (class, readonly) NSString *activePairedSystemVersion;
@property (class, readonly) struct CGSize { double x0; double x1; } mainScreenSize;
@property (class, readonly) double mainScreenScale;

+ (char)hasCapabilities:(id)a0;
+ (char)hasCapabilitiesIncludingCompatibilityCheck:(id)a0 isVisionOSCompatibleIOSApp:(char)a1;

@end
