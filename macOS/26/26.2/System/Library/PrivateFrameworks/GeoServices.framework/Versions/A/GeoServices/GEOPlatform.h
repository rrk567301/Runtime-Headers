@interface GEOPlatform : NSObject

+ (void)setIsRunningInGeod:(BOOL)a0;
+ (BOOL)isRunningInGeod;
+ (id)sharedPlatform;
+ (void)setIsRunningInGeoAPd:(BOOL)a0;
+ (BOOL)isRunningInGeoAPd;

- (id)clientCapabilities;
- (id)productName;
- (id)hardwareClass;
- (double)deviceScreenScale;
- (BOOL)supportsRealisticTiles;
- (id)osVersion;
- (id)buildVersion;
- (BOOL)isMacSetupUser;
- (BOOL)hasCellularRadio;
- (BOOL)supportsAdvancedMap;
- (id)deviceCountrySKUForServiceRequests;
- (BOOL)isCellDataPossible;
- (id)deviceCountrySKU;
- (long long)deviceScreenWidthInPixels;
- (BOOL)shouldPrefetchVisualResources;
- (id)hardwareIdentifier;
- (BOOL)isInternalInstall;
- (void)setClientCapabilitiesHardwareIdentifier:(id)a0;
- (BOOL)mapsFeatureFreedomEnabled;
- (long long)deviceScreenHeightInPixels;
- (BOOL)supportsForceTouch;
- (BOOL)supportsASTC;
- (id)init;
- (BOOL)supportsMultiUser;
- (id)osAndBuildVersion;
- (BOOL)supportsNavigation;
- (BOOL)isGUIUser;

@end
