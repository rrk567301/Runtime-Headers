@class NSNumber;

@interface ExclaveAudioFormatBase : NSObject

@property (readonly, nonatomic) NSNumber *sampleRate;
@property (readonly, nonatomic) NSNumber *channels;
@property (readonly, nonatomic) NSNumber *framesPerIO;

+ (id)createFrom:(id)a0 forUseCase:(unsigned int)a1 error:(id *)a2;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExclaveUseCaseFormat:(const struct ExADUseCaseFormat { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[4]; } *)a0;
- (id)initWithSampleRate:(unsigned int)a0 andChannels:(unsigned int)a1 andFrameSize:(unsigned int)a2;

@end
