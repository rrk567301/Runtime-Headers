@interface SNLogMelBasedFeatureExtractorConfiguration : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ model;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ stepSizeFrames;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly) unsigned int windowLengthFrames;
@property (nonatomic, readonly) unsigned int logMelStepSize;
@property (nonatomic, readonly) unsigned int outputFeatureSize;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 stepSizeFrames:(unsigned int)a1;

@end
