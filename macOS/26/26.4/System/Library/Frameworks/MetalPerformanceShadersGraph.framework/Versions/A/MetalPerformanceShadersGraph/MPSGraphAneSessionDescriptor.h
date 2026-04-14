@class MPSGraphCompilationDescriptor, MPSGraphExecutableEntryPointToSymbolAndFileNameMap, MPSGraphExecutableEntryPoint;

@interface MPSGraphAneSessionDescriptor : MPSGraphObject

@property unsigned long long aneSessionSignal;
@property (retain) MPSGraphExecutableEntryPoint *shapedEntryPoint;
@property (retain) MPSGraphExecutableEntryPointToSymbolAndFileNameMap *perEntryPointToSymbolAndFileNameMap;
@property (retain) MPSGraphCompilationDescriptor *compilationDescriptor;
@property BOOL energyEffecientWorkload;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)compilerOptions;
- (void)setCompilerOptions:(unsigned long long)a0;

@end
