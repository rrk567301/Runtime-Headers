@class AVAudioFormat, SHAudioConverter, SigX;

@interface SHMutableSignature : SHSignature

@property (retain) AVAudioFormat *format;
@property (retain) SigX *sigX;
@property unsigned int currentFrameCount;
@property (readonly) SHAudioConverter *audioConverter;
@property (readonly) long long clipStyle;
@property (readonly) double maximumSeconds;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)duration;
- (long long)currentPosition;
- (int)signatureType;
- (void)configureWithFormat:(id)a0;
- (BOOL)appendBuffer:(id)a0 atTime:(id)a1 error:(id *)a2;
- (id)clipExcessAudio:(id)a0;
- (id)generate:(id *)a0;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2 error:(id *)a3;
- (id)initWithMaximumSeconds:(double)a0 clipStyle:(long long)a1;
- (double)secondsFromFrameCount:(unsigned int)a0 forFormat:(id)a1;

@end
