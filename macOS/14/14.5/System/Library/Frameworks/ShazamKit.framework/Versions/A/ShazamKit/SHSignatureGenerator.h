@class SHMutableSignature;

@interface SHSignatureGenerator : NSObject

@property (retain) SHMutableSignature *mutableSignature;
@property (readonly) double maximumDuration;
@property (readonly) double duration;

+ (void)generateSignatureFromAsset:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)signature;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (BOOL)updateRingBufferDuration:(double)a0 error:(id *)a1;
- (void)disableSpectralOutput;
- (void)enableSpectralOutput;
- (id)initSignatureRingBufferWithDuration:(double)a0;
- (id)initWithMaximumSignatureDuration:(double)a0;
- (id)initWithMutableSignature:(id)a0;

@end
