@class CSAudioTimeConverter;

@interface CSAudioCircularBuffer : NSObject {
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<float>, std::default_delete<corespeech::CSAudioCircularBufferImpl<float>>> { void *__ptr_; } _csAudioCircularBufferImpl;
}

@property (nonatomic) unsigned long long bufferLength;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;
@property (nonatomic) unsigned long long numInputChannels;
@property (nonatomic) float inputRecordingDuration;

- (void)reset;
- (unsigned long long)sampleCount;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSamples:(const void *)a0 numSamples:(unsigned long long)a1;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long *)a0;
- (id)copySamplesFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)copybufferFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)initWithNumChannels:(unsigned long long)a0 recordingDuration:(float)a1 samplingRate:(float)a2 audioTimeConverter:(id)a3;
- (id)initWithNumChannels:(unsigned long long)a0 recordingDuration:(float)a1 samplingRate:(float)a2;
- (void)addSamples:(const void *)a0 numSamples:(unsigned long long)a1 atHostTime:(unsigned long long)a2;
- (id)copySamplesFrom:(unsigned long long)a0 to:(unsigned long long)a1 channelIdx:(unsigned long long)a2;
- (id)copySamplesFromHostTime:(unsigned long long)a0;

@end
