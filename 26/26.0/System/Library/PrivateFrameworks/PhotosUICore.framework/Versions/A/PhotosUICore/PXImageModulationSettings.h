@class NSString;

@interface PXImageModulationSettings : PXSettings

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long filterType;
@property (nonatomic) long long HDRConsideration;
@property (nonatomic) BOOL gainBoostEnabled;
@property (nonatomic) BOOL showGainMapBorder;
@property (nonatomic) BOOL animateGainMapAppearance;
@property (nonatomic) double gainMapAnimationDuration;
@property (copy, nonatomic) NSString *gainMapAnimationTimingFunction;
@property (nonatomic) double gainMapAnimationActivationThreshold;
@property (nonatomic) double HDRModulationIntensity;
@property (nonatomic) double SDRModulationIntensity;
@property (nonatomic) double videoComplementModulationIntensity;
@property (nonatomic) long long EDRHeadroomRequestScheme;
@property (nonatomic) BOOL useThresholdForVideos;
@property (nonatomic) long long EDRHeadroomUsageScheme;
@property (nonatomic) double manualEDRHeadroomRequestStops;
@property (nonatomic) double EDRHeadroomRequestHDRThreshold;
@property (nonatomic) double EDRHeadroomRequestSustainDuration;
@property (nonatomic) double lowEDRRequestedHeadroomStops;
@property (nonatomic) double highEDRRequestedHeadroomStops;
@property (nonatomic) double deviceMaximumEDRHeadroomStops;
@property (nonatomic) BOOL forceCurrentScreenSupportsHDR;
@property (nonatomic) BOOL enableHeadroomMonitoring;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (void).cxx_destruct;

@end
