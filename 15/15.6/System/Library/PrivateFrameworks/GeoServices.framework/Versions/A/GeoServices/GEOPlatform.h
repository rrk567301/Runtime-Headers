@interface GEOPlatform : NSObject

+ (char)isRunningInGeod;
+ (char)isRunningInGeoAPd;
+ (void)setIsRunningInGeoAPd:(char)a0;
+ (void)setIsRunningInGeod:(char)a0;
+ (id)sharedPlatform;

- (id)init;
- (id)productName;
- (char)isInternalInstall;
- (id)buildVersion;
- (id)osVersion;
- (char)supportsNavigation;
- (char)supportsMultiUser;
- (double)deviceScreenScale;
- (id)_systemInfoDictionary;
- (id)clientCapabilities;
- (long long)deviceScreenHeightInPixels;
- (long long)deviceScreenWidthInPixels;
- (id)hardwareClass;
- (id)hardwareIdentifier;
- (char)isCellDataPossible;
- (char)isGUIUser;
- (char)isMacSetupUser;
- (char)mapsFeatureFreedomEnabled;
- (id)osAndBuildVersion;
- (void)setClientCapabilitiesHardwareIdentifier:(id)a0;
- (char)shouldPrefetchVisualResources;
- (char)supportsAdvancedMap;
- (char)supportsForceTouch;
- (char)supportsRealisticTiles;

@end
