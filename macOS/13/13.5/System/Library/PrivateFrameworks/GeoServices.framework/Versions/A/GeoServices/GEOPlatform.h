@interface GEOPlatform : NSObject

+ (BOOL)isRunningInGeod;
+ (void)setIsRunningInGeod:(BOOL)a0;
+ (id)sharedPlatform;

- (id)init;
- (id)productName;
- (BOOL)isInternalInstall;
- (id)buildVersion;
- (id)osVersion;
- (BOOL)supportsNavigation;
- (BOOL)supportsMultiUser;
- (double)deviceScreenScale;
- (id)_systemInfoDictionary;
- (id)clientCapabilities;
- (long long)deviceScreenHeightInPixels;
- (long long)deviceScreenWidthInPixels;
- (id)hardwareClass;
- (id)hardwareIdentifier;
- (id)hardwareModel;
- (BOOL)isCellDataPossible;
- (BOOL)isMacSetupUser;
- (BOOL)mapsFeatureFreedomEnabled;
- (id)osAndBuildVersion;
- (BOOL)supportsAdvancedMap;
- (BOOL)supportsForceTouch;
- (BOOL)supportsRealisticTiles;

@end
