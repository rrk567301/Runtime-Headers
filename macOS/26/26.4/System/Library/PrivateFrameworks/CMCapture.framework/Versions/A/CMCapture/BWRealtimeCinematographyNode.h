@class NSString, BWNodeOutput, NSData;

@interface BWRealtimeCinematographyNode : BWNode <BWFigVideoCaptureDeviceStreamingFilterDelegate>

@property (readonly, nonatomic) BWNodeOutput *detectedObjectsOutput;
@property (nonatomic) float simulatedAperture;
@property (readonly, nonatomic) NSString *cinematographyModelVersionString;
@property (readonly, nonatomic) BWNodeOutput *movieFileOutput;
@property (readonly, nonatomic) BWNodeOutput *previewOutput;
@property (readonly, nonatomic) NSData *globalMetadata;
@property (readonly, nonatomic) BOOL transformCinematographyDetectionsForMovieFileOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithObjectMetadataIdentifiers:(id)a0 cachedSimulatedAperture:(float)a1 captureDevice:(id)a2 tuningParameters:(id)a3 videoDepthConfiguration:(id)a4 smartStyleLearningEnabled:(BOOL)a5 highResolutionInputEnabled:(BOOL)a6 transformCinematographyDetectionsForMovieFileOutput:(BOOL)a7;

@end
