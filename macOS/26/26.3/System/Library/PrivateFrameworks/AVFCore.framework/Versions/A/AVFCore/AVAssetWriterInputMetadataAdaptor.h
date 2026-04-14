@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptorInternal;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}

@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;

+ (void)initialize;
+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)a0;

- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)appendTimedMetadataGroup:(id)a0;
- (id)initWithAssetWriterInput:(id)a0;

@end
