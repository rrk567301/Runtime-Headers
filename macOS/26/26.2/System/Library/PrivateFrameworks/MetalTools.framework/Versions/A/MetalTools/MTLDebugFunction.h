@class MTLFunctionConstantValues;

@interface MTLDebugFunction : MTLToolsFunction

@property (retain) MTLFunctionConstantValues *constantValues;
@property (nonatomic) unsigned long long intersectionFunctionSignature;

- (id)importedSymbols;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2;
- (id)formattedDescription:(unsigned long long)a0;
- (id)importedLibraries;
- (id)bitcodeData;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 binaryArchives:(id)a2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (void)dealloc;
- (unsigned long long)getIntersectionFunctionSignature;
- (id)initWithFunction:(id)a0 library:(id)a1;
- (void)validateIsIFBFunction;

@end
