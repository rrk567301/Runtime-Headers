@interface GEOPlatform : NSObject

+ (void)setIsRunningInGeoAPd:(BOOL)a0;
+ (BOOL)isRunningInGeod;
+ (void)setIsRunningInGeod:(BOOL)a0;
+ (BOOL)isRunningInGeoAPd;
+ (id)sharedPlatform;

- (id)buildVersion;
- (id)hardwareIdentifier;
- (id)productName;
- (id)osVersion;
- (BOOL)isInternalInstall;
- (id)hardwareClass;
- (id)deviceCountrySKU;
- (long long)deviceScreenHeightInPixels;
- (double)deviceScreenScale;
- (id)osAndBuildVersion;
- (BOOL)shouldPrefetchVisualResources;
- (long long)deviceScreenWidthInPixels;
- (BOOL)hasCellularRadio;
- (void)setClientCapabilitiesHardwareIdentifier:(id)a0;
- (BOOL)supportsASTC;
- (BOOL)isMacSetupUser;
- (id)deviceCountrySKUForServiceRequests;
- (BOOL)supportsMultiUser;
- (BOOL)supportsNavigation;
- (id)init;
- (BOOL)isGUIUser;
- (BOOL)supportsForceTouch;
- (BOOL)supportsRealisticTiles;
- (BOOL)mapsFeatureFreedomEnabled;
- (id)clientCapabilities;
- (BOOL)isCellDataPossible;
- (BOOL)supportsAdvancedMap;

@end
