@class NSArray, NSDictionary, NSString, VCPVideoInterpolationConfiguration;

@interface VTLowLatencyFrameInterpolationConfiguration : NSObject <VTFrameProcessorConfiguration> {
    VCPVideoInterpolationConfiguration *vcpConfiguration;
}

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;
@property (class, readonly, nonatomic) struct { int x0; int x1; } maximumDimensions;
@property (class, readonly, nonatomic) struct { int x0; int x1; } minimumDimensions;

@property (readonly, nonatomic) long long frameWidth;
@property (readonly, nonatomic) long long frameHeight;
@property (readonly, nonatomic) long long spatialScaleFactor;
@property (readonly, nonatomic) long long numberOfInterpolatedFrames;
@property (readonly, nonatomic) NSArray *frameSupportedPixelFormats;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *destinationPixelBufferAttributes;
@property (readonly, nonatomic) long long nextFrameCount;
@property (readonly, nonatomic) long long previousFrameCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)dealloc;
- (id)initWithFrameWidth:(long long)a0 frameHeight:(long long)a1 numberOfInterpolatedFrames:(long long)a2;
- (id)initWithFrameWidth:(long long)a0 frameHeight:(long long)a1 spatialScaleFactor:(long long)a2;
- (id)vcpConfiguration;

@end
