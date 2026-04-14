@interface GEOPlatform : NSObject

+ (void)setIsRunningInGeod:(BOOL)a0;
+ (void)setIsRunningInGeoAPd:(BOOL)a0;
+ (BOOL)isRunningInGeoAPd;
+ (id)sharedPlatform;
+ (BOOL)isRunningInGeod;

- (id)hardwareClass;
- (id)buildVersion;
- (id)productName;
- (id)hardwareIdentifier;
- (id)deviceCountrySKUForServiceRequests;
- (id)osVersion;
- (BOOL)shouldPrefetchVisualResources;
- (double)deviceScreenScale;
- (BOOL)supportsAdvancedMap;
- (void)setClientCapabilitiesHardwareIdentifier:(id)a0;
- (BOOL)supportsASTC;
- (id)clientCapabilities;
- (BOOL)isGUIUser;
- (id)deviceCountrySKU;
- (BOOL)mapsFeatureFreedomEnabled;
- (id)init;
- (BOOL)supportsMultiUser;
- (BOOL)supportsRealisticTiles;
- (long long)deviceScreenHeightInPixels;
- (long long)deviceScreenWidthInPixels;
- (BOOL)supportsForceTouch;
- (BOOL)isInternalInstall;
- (BOOL)hasCellularRadio;
- (BOOL)supportsNavigation;
- (BOOL)isCellDataPossible;
- (id)osAndBuildVersion;
- (BOOL)isMacSetupUser;

@end
