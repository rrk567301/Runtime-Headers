@class NSString;

@interface PXImageModulationSettings : PXSettings

@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) long long filterType;
@property (nonatomic) long long HDRConsideration;
@property (nonatomic) char gainBoostEnabled;
@property (nonatomic) char toneMapEnabled;
@property (nonatomic) char showGainMapBorder;
@property (nonatomic) char animateGainMapAppearance;
@property (nonatomic) double gainMapAnimationDuration;
@property (copy, nonatomic) NSString *gainMapAnimationTimingFunction;
@property (nonatomic) double gainMapAnimationActivationThreshold;
@property (nonatomic) double HDRModulationIntensity;
@property (nonatomic) double SDRModulationIntensity;
@property (nonatomic) double videoComplementModulationIntensity;
@property (nonatomic) long long EDRHeadroomRequestScheme;
@property (nonatomic) char useThresholdForVideos;
@property (nonatomic) long long EDRHeadroomUsageScheme;
@property (nonatomic) double manualEDRHeadroomRequestStops;
@property (nonatomic) double EDRHeadroomRequestHDRThreshold;
@property (nonatomic) double EDRHeadroomRequestSustainDuration;
@property (nonatomic) double lowEDRRequestedHeadroomStops;
@property (nonatomic) double highEDRRequestedHeadroomStops;
@property (nonatomic) double deviceMaximumEDRHeadroomStops;
@property (nonatomic) char forceCurrentScreenSupportsHDR;
@property (nonatomic) char enableHeadroomMonitoring;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
