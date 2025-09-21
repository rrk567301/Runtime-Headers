@interface AVCaptureSpatialAudioMetadataSampleGenerator : NSObject

@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *timedMetadataSampleBufferFormatDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (int)analyzeAudioSample:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)newTimedMetadataSampleBufferAndResetAnalyzer;
- (void)resetAnalyzer;

@end
