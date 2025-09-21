@class CoreImageLibrary;
@protocol MTLLibrary, MTLPipelineLibrarySPI;

@interface UniLibrary : NSObject

@property (retain) id<MTLLibrary> library;
@property (retain) CoreImageLibrary *coreImageLibrary;
@property (retain, nonatomic) id<MTLPipelineLibrarySPI> pipelineLibrary;

- (void).cxx_destruct;
- (id)_identifyGPU:(id)a0;
- (id)initWithDevice:(id)a0 metalOnly:(char)a1;

@end
