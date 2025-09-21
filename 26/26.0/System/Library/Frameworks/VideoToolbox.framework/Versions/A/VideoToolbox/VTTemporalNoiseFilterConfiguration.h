@class NSArray, NSDictionary, NSString;

@interface VTTemporalNoiseFilterConfiguration : NSObject <VTFrameProcessorConfiguration> {
    unsigned int _sourcePixelFormat;
}

@property (class, readonly, nonatomic) NSArray *supportedSourcePixelFormats;
@property (class, readonly, nonatomic) struct { int x0; int x1; } maximumDimensions;
@property (class, readonly, nonatomic) struct { int x0; int x1; } minimumDimensions;
@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

@property (readonly, nonatomic) long long frameWidth;
@property (readonly, nonatomic) long long frameHeight;
@property (readonly, nonatomic) NSArray *frameSupportedPixelFormats;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *destinationPixelBufferAttributes;
@property (readonly, nonatomic) long long nextFrameCount;
@property (readonly, nonatomic) long long previousFrameCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_loadCapabilities;

- (void)dealloc;
- (id)initWithFrameWidth:(long long)a0 frameHeight:(long long)a1;
- (id)initWithFrameWidth:(long long)a0 frameHeight:(long long)a1 sourcePixelFormat:(unsigned int)a2;
- (BOOL)loadProperties;
- (unsigned int)sourcePixelFormat;

@end
