@class NSNumber, NSArray;
@protocol LPTestingLoader;

@interface LPTestingOverrides : NSObject

@property (class, nonatomic) char forceRTL;
@property (class, nonatomic) unsigned long long forceImageLoadingScaleFactor;
@property (class, retain, nonatomic) NSNumber *forceSubsampleImagesToScreenSize;
@property (class, nonatomic) char forceEnableAllEntitlements;
@property (class, nonatomic) char forceIgnoreAllTCCChecks;
@property (class, nonatomic) char forceMonospaceFonts;
@property (class, nonatomic) char forceEnableLockdownMode;
@property (class, retain, nonatomic) id<LPTestingLoader> customLoader;
@property (class, copy, nonatomic) NSArray *additionalAllowedFileURLDirectories;
@property (class, nonatomic) char forceUseSmallerMaximumMetadataSize;
@property (class, nonatomic) char forceDisableImageDeduplication;
@property (class, nonatomic) char forceCollapseButtons;

+ (void)reset;

@end
