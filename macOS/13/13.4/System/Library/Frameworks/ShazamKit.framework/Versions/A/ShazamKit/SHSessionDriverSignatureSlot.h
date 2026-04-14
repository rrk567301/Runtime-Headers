@class SHSignatureGenerator, SHSignature, AVAudioPCMBuffer;

@interface SHSessionDriverSignatureSlot : NSObject

@property (readonly) double maximumSignatureDuration;
@property long long state;
@property (readonly) SHSignatureGenerator *signatureGenerator;
@property (readonly) SHSignature *generatedSignature;
@property (readonly) AVAudioPCMBuffer *excessAudio;
@property (readonly) SHSignature *signature;
@property (readonly) double signatureDuration;

- (void).cxx_destruct;
- (void)reset;
- (long long)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)initWithMaximumSignatureDuration:(double)a0;

@end
