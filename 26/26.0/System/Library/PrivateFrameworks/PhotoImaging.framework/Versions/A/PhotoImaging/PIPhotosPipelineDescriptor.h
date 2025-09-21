@class NUIdentifier, NUVersion;
@protocol NUAsset;

@interface PIPhotosPipelineDescriptor : NSObject

@property (class, readonly, nonatomic) NUVersion *pipelineVersion2025_1;

@property (retain, nonatomic) NUIdentifier *pipelineIdentifier;
@property (retain, nonatomic) NUVersion *basePipelineVersion;
@property (copy, nonatomic) NUIdentifier *schemaIdentifier;
@property (readonly, nonatomic) id<NUAsset> asset;

+ (id)photosPipelineDescriptorWithAsset:(id)a0 version:(id)a1;

- (id)init;
- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;

@end
