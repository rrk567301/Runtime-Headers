@interface GEOPlatform : NSObject

+ (void)setIsRunningInGeod:(BOOL)a0;
+ (BOOL)isRunningInGeod;
+ (id)sharedPlatform;

- (id)init;
- (id)productName;
- (BOOL)isInternalInstall;
- (id)buildVersion;
- (id)osVersion;
- (BOOL)supportsNavigation;
- (BOOL)supportsMultiUser;
- (double)deviceScreenScale;
- (id)clientCapabilities;
- (id)hardwareIdentifier;
- (id)hardwareModel;
- (BOOL)supportsAdvancedMap;
- (id)_systemInfoDictionary;
- (id)osAndBuildVersion;
- (id)hardwareClass;
- (BOOL)mapsFeatureFreedomEnabled;
- (BOOL)supportsRealisticTiles;
- (BOOL)supportsForceTouch;
- (BOOL)isCellDataPossible;
- (BOOL)isMacSetupUser;
- (long long)deviceScreenWidthInPixels;
- (long long)deviceScreenHeightInPixels;

@end
