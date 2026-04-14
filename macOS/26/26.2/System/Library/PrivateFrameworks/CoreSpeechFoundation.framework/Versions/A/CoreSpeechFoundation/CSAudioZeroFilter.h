@interface CSAudioZeroFilter : NSObject {
    struct unique_ptr<CSAudioZeroFilterImpl<float>, std::default_delete<CSAudioZeroFilterImpl<float>>> { struct { void *__ptr_; } ; } _audioZeroFilterImpl;
}

- (id)metrics;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id *)a0;
- (unsigned long long)filterZerosInAudioPacket:(id)a0 atBufferHostTime:(unsigned long long)a1 filteredPacket:(id *)a2;
- (id)initWithZeroWindowSize:(unsigned long long)a0 approxAbsSpeechThreshold:(float)a1 numHostTicksPerAudioSample:(double)a2;

@end
