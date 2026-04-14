@class AVAudioFormat, SigX;

@interface SHMutableSignature : SHSignature

@property (retain) AVAudioFormat *format;
@property (retain) SigX *sigX;
@property unsigned int currentFrameCount;
@property (readonly) long long clipStyle;
@property (readonly) double maximumSeconds;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (double)duration;
- (long long)currentPosition;
- (int)signatureType;
- (void)configureWithFormat:(id)a0;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)initWithMaximumSeconds:(double)a0 clipStyle:(long long)a1;
- (id)clipExcessAudio:(id)a0;
- (id)generate:(id *)a0;
- (double)secondsFromFrameCount:(unsigned int)a0 forFormat:(id)a1;

@end
