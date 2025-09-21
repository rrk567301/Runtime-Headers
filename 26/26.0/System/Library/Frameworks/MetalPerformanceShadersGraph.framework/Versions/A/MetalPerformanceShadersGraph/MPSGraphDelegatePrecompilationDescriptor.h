@class NSString, NSURL;

@interface MPSGraphDelegatePrecompilationDescriptor : MPSGraphObject

@property (retain) NSString *architecture;
@property unsigned long long gpuCoreCount;
@property (retain) NSURL *aneOptionsURL;

- (void).cxx_destruct;
- (id)initWithArchitecture:(id)a0;
- (id)initWithArchitecture:(id)a0 aneOptionsURL:(id)a1;
- (id)initWithArchitecture:(id)a0 gpuCoreCount:(unsigned long long)a1;
- (id)initWithArchitecture:(id)a0 gpuCoreCount:(unsigned long long)a1 aneOptionsURL:(id)a2;
- (void)validatePrecompilationOptions;

@end
