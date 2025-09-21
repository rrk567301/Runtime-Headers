@class NUIdentifier, NUVersion;
@protocol NUAsset;

@interface PIPhotosPipelineBuilder : NSObject <NUPipelineBuilder>

@property (class, readonly, nonatomic) NUVersion *pipelineVersion;

@property (readonly, nonatomic) NUIdentifier *pipelineIdentifier;
@property (readonly, nonatomic) NUIdentifier *schemaIdentifier;
@property (readonly, nonatomic) id<NUAsset> asset;
@property (readonly, nonatomic) NUIdentifier *identifier;

+ (id)pipelineBuilderWithDescriptor:(id)a0 error:(out id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)buildPipeline:(id)a0 error:(out id *)a1;
- (BOOL)buildPhotosPipeline:(id)a0 error:(out id *)a1;
- (id)initWithPipelineDescriptor:(id)a0;

@end
