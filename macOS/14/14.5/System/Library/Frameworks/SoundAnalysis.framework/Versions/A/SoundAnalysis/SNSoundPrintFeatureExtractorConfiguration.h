@interface SNSoundPrintFeatureExtractorConfiguration : NSObject

@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ windowLengthFrames;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ stepSizeFrames;
@property (nonatomic, readonly) unsigned int outputFeatureSize;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ model;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 windowLengthFrames:(unsigned int)a1 stepSizeFrames:(unsigned int)a2;

@end
