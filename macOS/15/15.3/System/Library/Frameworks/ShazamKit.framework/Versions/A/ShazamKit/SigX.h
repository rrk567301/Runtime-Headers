@interface SigX : NSObject

@property (nonatomic) void *mySigX;
@property (copy) id /* block */ spectralOutputHandler;

+ (id)version;

- (void)dealloc;
- (BOOL)resetWithError:(id *)a0;
- (BOOL)ConvertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1;
- (BOOL)FillUnknownError:(id *)a0;
- (BOOL)ConvertSystemError:(const struct system_error { void /* function */ **x0; struct __libcpp_refstring { char *x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } *)a0 toError:(id *)a1;
- (void)disableSpectralOutput;
- (void)enableSpectralOutputForNumberOfFrequencyBins:(int)a0 callbackFrequency:(int)a1 completionHandler:(id /* block */)a2;
- (BOOL)flowBuffer:(id)a0 error:(id *)a1;
- (BOOL)flowFloatSamples:(float *)a0 sampleCount:(int)a1 channels:(int)a2 error:(id *)a3;
- (BOOL)flowFloatSamples:(float *)a0 sampleCount:(int)a1 error:(id *)a2;
- (BOOL)flowIntSamples:(short *)a0 sampleCount:(int)a1 channels:(int)a2 error:(id *)a3;
- (BOOL)flowIntSamples:(const short *)a0 sampleCount:(int)a1 error:(id *)a2;
- (id)initWithSignatureType:(int)a0 sampleRate:(unsigned int)a1 error:(id *)a2;
- (id)initWithSignatureType:(int)a0 sampleRate:(unsigned int)a1 signatureOptions:(int)a2 error:(id *)a3;
- (BOOL)setRollingBufferSeconds:(float)a0 error:(id *)a1;
- (id)signatureWithError:(id *)a0;

@end
