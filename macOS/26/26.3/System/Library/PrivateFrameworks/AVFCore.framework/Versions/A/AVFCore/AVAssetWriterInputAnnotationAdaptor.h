@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor;

@interface AVAssetWriterInputAnnotationAdaptor : NSObject {
    AVAssetWriterInput *_assetWriterInput;
    AVAssetWriterInputMetadataAdaptor *_assetWriterInputMetadataAdaptor;
}

@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;

+ (void)initialize;
+ (struct opaqueCMFormatDescription { } *)annotationFormatDescription;
+ (id)assetWriterInputAnnotationAdaptorWithAssetWriterInput:(id)a0;

- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)appendAnnotation:(id)a0;
- (id)initWithAssetWriterInput:(id)a0;

@end
