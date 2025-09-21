@class MPSGraphCompilationDescriptor, NSDictionary;

@interface MPSGraphExecutableDescriptor : MPSGraphObject

@property unsigned long long compilerOptions;
@property (copy) id /* block */ variableFetchHandler;
@property (retain) MPSGraphCompilationDescriptor *compilationDescriptor;
@property BOOL isCoreMLBytecode;
@property (retain, nonatomic) NSDictionary *perDeviceDescriptorCompilationOptions;

- (id)init;
- (void).cxx_destruct;

@end
