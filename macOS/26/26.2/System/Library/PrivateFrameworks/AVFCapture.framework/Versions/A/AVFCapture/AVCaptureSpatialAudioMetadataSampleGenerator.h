@interface AVCaptureSpatialAudioMetadataSampleGenerator : NSObject

@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *timedMetadataSampleBufferFormatDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (int)analyzeAudioSample:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)newTimedMetadataSampleBufferAndResetAnalyzer;
- (void)resetAnalyzer;

@end
