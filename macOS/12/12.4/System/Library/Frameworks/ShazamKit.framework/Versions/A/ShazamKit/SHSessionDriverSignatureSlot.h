@class SHSignatureGenerator, AVAudioPCMBuffer;

@interface SHSessionDriverSignatureSlot : NSObject

@property (readonly) double maximumSignatureDuration;
@property long long state;
@property (readonly) SHSignatureGenerator *signatureGenerator;
@property (readonly) AVAudioPCMBuffer *excessAudio;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithMaximumSignatureDuration:(double)a0;
- (long long)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;

@end
