@interface GEOPlatform : NSObject

+ (id)sharedPlatform;
+ (void)setIsRunningInGeod:(BOOL)a0;
+ (BOOL)isRunningInGeoAPd;
+ (void)setIsRunningInGeoAPd:(BOOL)a0;
+ (BOOL)isRunningInGeod;

- (id)osVersion;
- (id)productName;
- (id)hardwareClass;
- (BOOL)mapsFeatureFreedomEnabled;
- (id)buildVersion;
- (BOOL)supportsRealisticTiles;
- (BOOL)hasCellularRadio;
- (long long)deviceScreenWidthInPixels;
- (BOOL)isInternalInstall;
- (id)osAndBuildVersion;
- (BOOL)supportsForceTouch;
- (id)deviceCountrySKUForServiceRequests;
- (id)deviceCountrySKU;
- (BOOL)supportsNavigation;
- (BOOL)supportsAdvancedMap;
- (BOOL)isGUIUser;
- (double)deviceScreenScale;
- (id)clientCapabilities;
- (BOOL)isMacSetupUser;
- (void)setClientCapabilitiesHardwareIdentifier:(id)a0;
- (BOOL)shouldPrefetchVisualResources;
- (BOOL)isCellDataPossible;
- (long long)deviceScreenHeightInPixels;
- (BOOL)supportsASTC;
- (BOOL)supportsMultiUser;
- (id)hardwareIdentifier;
- (id)init;

@end
