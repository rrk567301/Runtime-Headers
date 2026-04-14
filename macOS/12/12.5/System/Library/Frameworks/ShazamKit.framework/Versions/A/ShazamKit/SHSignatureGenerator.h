@class SHMutableSignature;

@interface SHSignatureGenerator : NSObject

@property (retain) SHMutableSignature *mutableSignature;

+ (id)signatureFromAudioFile:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)signature;
- (double)duration;
- (double)maximumDuration;
- (id)initWithMaximumSignatureDuration:(double)a0;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)initSignatureRingBufferWithDuration:(double)a0;

@end
