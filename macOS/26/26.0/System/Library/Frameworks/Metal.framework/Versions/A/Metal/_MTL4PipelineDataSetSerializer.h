@class NSString;
@protocol MTLBinaryArchive, MTLDevice;

@interface _MTL4PipelineDataSetSerializer : _MTLObjectWithLabel <MTL4PipelineDataSetSerializerGGDSPI> {
    id<MTLBinaryArchive> _destinationBinaryArchive;
    id<MTLDevice> _device;
    struct unique_ptr<MTL4MetalScriptBuilder, std::default_delete<MTL4MetalScriptBuilder>> { struct MTL4MetalScriptBuilder *__ptr_; } _mtl4ScriptBuilder;
    unsigned long long _configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)destinationBinaryArchive;
- (id).cxx_construct;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void).cxx_destruct;
- (void)addBinaryFunctionWithDescriptor:(id)a0;
- (void)addPipelineWithDescriptor:(id)a0;
- (BOOL)serializeAsArchiveAndFlushToURL:(id)a0 error:(id *)a1;
- (id)serializeAsPipelinesScriptWithError:(id *)a0;

@end
