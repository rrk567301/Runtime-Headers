@class NSNumber, NSURL, NSString;

@interface ISDefaults : NSObject

@property (retain) NSNumber *_usePerstentCache;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) char _enableAppIconOverrides;
@property (readonly) char _enable1016Icons;
@property (readonly) char _ignoreDocumentClaimIcons;
@property (retain) NSURL *_cacheURL;
@property (readonly) char usePerstentCache;
@property (readonly) NSURL *cacheURL;
@property (readonly) NSString *cacheSaltString;
@property (readonly) NSString *serviceName;
@property (readonly) char defaultToTemplatizedAppIcons;
@property (readonly) char allowDocumentClaimIcons;
@property (readonly) char preferSymbolAsTemplateVariant;
@property (readonly) char enableAppIconOverides;
@property (readonly) double prepareImageDelay;
@property (readonly) char logMissingURLCacheProperties;
@property (readonly) char enableInstanceIDBasedTwoAppModel;
@property (readonly) char enableBadgeOverhang;
@property (readonly) char isDarkIconSegmentationEnabled;
@property (readonly) char isDarkIconColorEnhancementEnabled;
@property (readonly) char isDarkIconDimmingEnabled;
@property (readonly) char isDarkIconDimmingForDedicatedAssetsEnabled;
@property (readonly) char isFlagDimmedDedicatedAssetsEnabled;
@property (readonly) char isIconSegmentationAnalyticsForAllIconsEnabled;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)tintColor;
- (char)isDebugGraphicIconColourEnabled;
- (id)debugPreDefinedGraphicIconColor;
- (char)isUnsupportedDecorationDisabled;
- (id)cacheURL;
- (id)debugGraphicIconColor;
- (id)debugISIconGraphicIconColor;
- (char)disableLegacyIconSegmentation;
- (long long)forceApperance;
- (char)simulateTintableAppearance;
- (char)usePerstentCache;

@end
