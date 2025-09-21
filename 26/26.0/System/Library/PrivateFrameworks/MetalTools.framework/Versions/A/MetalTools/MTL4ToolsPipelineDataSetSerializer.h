@class NSString;

@interface MTL4ToolsPipelineDataSetSerializer : MTLToolsObject <MTL4PipelineDataSetSerializerGGDSPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)destinationBinaryArchive;
- (void)addBinaryFunctionWithDescriptor:(id)a0;
- (void)addPipelineWithDescriptor:(id)a0;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (BOOL)serializeAsArchiveAndFlushToURL:(id)a0 error:(id *)a1;
- (id)serializeAsPipelinesScriptWithError:(id *)a0;

@end
