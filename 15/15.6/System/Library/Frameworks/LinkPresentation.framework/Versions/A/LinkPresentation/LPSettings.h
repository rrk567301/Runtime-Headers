@interface LPSettings : NSObject

@property (class, readonly, nonatomic) char showDebugIndicators;
@property (class, readonly, nonatomic) char disableLegacyStoreLookups;
@property (class, readonly, nonatomic) char disableAutoPlay;
@property (class, readonly, nonatomic) char disableAnimations;
@property (class, readonly, nonatomic) char subsampleImagesToScreenSize;
@property (class, readonly, nonatomic) char useLightweightMaterials;

+ (void)initialize;
+ (void)updateFromDefaults;

@end
