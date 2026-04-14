@class NSString;

@interface ASCMobileGestalt : NSObject

@property (class, readonly) BOOL hasSystemTelephonyOfAnyKind;
@property (class, readonly) BOOL hasVenice;
@property (class, readonly) BOOL wapiCapability;
@property (class, readonly) NSString *deviceClass;
@property (class, readonly) NSString *productType;
@property (class, readonly) BOOL hasHEVCDecoding;
@property (class, readonly) struct CGSize { double x0; double x1; } mainScreenSize;
@property (class, readonly) double mainScreenScale;
@property (class, readonly) double mainScreenCornerRadius;
@property (class, readonly) struct CGSize { double x0; double x1; } mainScreenPointSize;
@property (class, readonly) BOOL isPad;
@property (class, readonly) BOOL isStandaloneWatch;
@property (class, readonly) NSString *activePairedSystemVersion;
@property (class, readonly) BOOL isAppleSiliconMac;

+ (BOOL)hasCapabilities:(id)a0;
+ (BOOL)hasCapabilitiesIncludingCompatibilityCheck:(id)a0 isVisionOSCompatibleIOSApp:(BOOL)a1;

@end
