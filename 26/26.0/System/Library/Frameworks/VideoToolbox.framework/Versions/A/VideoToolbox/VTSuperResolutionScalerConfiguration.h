@class NSIndexSet, NSArray, NSDictionary, NSString, VESuperResolutionConfiguration;

@interface VTSuperResolutionScalerConfiguration : NSObject <VTFrameProcessorConfiguration> {
    VESuperResolutionConfiguration *_veConfiguration;
}

@property (class, readonly, nonatomic) NSIndexSet *supportedRevisions;
@property (class, readonly, nonatomic) long long defaultRevision;
@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;
@property (class, readonly, nonatomic) NSArray *supportedScaleFactors;
@property (class, readonly, nonatomic) struct { int x0; int x1; } maximumDimensions;
@property (class, readonly, nonatomic) struct { int x0; int x1; } minimumDimensions;

@property (readonly, nonatomic) long long frameWidth;
@property (readonly, nonatomic) long long frameHeight;
@property (readonly, nonatomic) long long inputType;
@property (readonly, nonatomic, getter=usesPrecomputedFlow) BOOL precomputedFlow;
@property (readonly, nonatomic) long long scaleFactor;
@property (readonly, nonatomic) long long qualityPrioritization;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) NSArray *frameSupportedPixelFormats;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *destinationPixelBufferAttributes;
@property (readonly, nonatomic) long long configurationModelStatus;
@property (readonly, nonatomic) float configurationModelPercentageAvailable;
@property (readonly, nonatomic) long long nextFrameCount;
@property (readonly, nonatomic) long long previousFrameCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)dealloc;
- (id)veConfiguration;
- (void)downloadConfigurationModelWithCompletionHandler:(id /* block */)a0;
- (id)initWithFrameWidth:(long long)a0 frameHeight:(long long)a1 scaleFactor:(long long)a2 inputType:(long long)a3 usePrecomputedFlow:(BOOL)a4 qualityPrioritization:(long long)a5 revision:(long long)a6;

@end
