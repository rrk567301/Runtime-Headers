@class NSArray, NSString, MTL4MachineLearningPipelineReflection;
@protocol MTLDevice, MPSGraphExecutableProxy;

@interface _MTL4MachineLearningPipelineState : _MTLAllocation <MTL4MachineLearningPipelineStateGGDSPI> {
    unsigned long long _allocatedSize;
}

@property (readonly) MTL4MachineLearningPipelineReflection *reflection;
@property (readonly) unsigned long long intermediatesHeapSize;
@property long long deviceSelection;
@property (readonly) id<MPSGraphExecutableProxy> executable;
@property (retain) NSArray *inputShapes;
@property (retain) NSArray *outputShapes;
@property (readonly) NSString *functionName;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)optimizedBytecode;
- (id)resourceBlobForByteCodeSignature:(id)a0 resourceName:(id)a1 error:(id *)a2;
- (id)runWithInputsArray:(id)a0 resultsArray:(id)a1 intermediateOperations:(id)a2;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 executable:(id)a2 functionName:(id)a3 deviceSelection:(long long)a4;
- (void)setAllocatedSize:(unsigned long long)a0;
- (void)setReflection:(id)a0;

@end
