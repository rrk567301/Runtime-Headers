@interface TextRecognition.CRCTCTextDecoderV3 : CRCTCCVNLPTextDecoder

@property (nonatomic, readonly) struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; } pruningPolicy;

+ (id)lmSupportedLanguages;

- (id)init;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;

@end
