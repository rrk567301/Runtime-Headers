@class AVAssetWriterInput, AVAssetWriterInputCaptionAdaptorInternal;

@interface AVAssetWriterInputCaptionAdaptor : NSObject {
    AVAssetWriterInputCaptionAdaptorInternal *_internal;
}

@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;

+ (id)assetWriterInputCaptionAdaptorWithAssetWriterInput:(id)a0;

- (void)dealloc;
- (id)init;
- (char)appendCaption:(id)a0;
- (char)appendCaptionGroup:(id)a0;
- (id)initWithAssetWriterInput:(id)a0;

@end
