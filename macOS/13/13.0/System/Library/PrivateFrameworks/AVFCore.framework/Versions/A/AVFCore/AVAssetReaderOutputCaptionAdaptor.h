@class AVAssetReaderTrackOutput, AVAssetReaderOutputCaptionAdaptorInternal;
@protocol AVAssetReaderCaptionValidationHandling;

@interface AVAssetReaderOutputCaptionAdaptor : NSObject <AVAssetReaderOutputAdaptor> {
    AVAssetReaderOutputCaptionAdaptorInternal *_internal;
}

@property (weak) id<AVAssetReaderCaptionValidationHandling> validationDelegate;
@property (readonly, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;

+ (id)assetReaderOutputCaptionAdaptorWithAssetReaderTrackOutput:(id)a0;

- (void)dealloc;
- (int)addExtractionForOutput:(id)a0 figAssetReader:(struct OpaqueFigAssetReader { } *)a1 options:(id)a2 withOutputExtactionID:(int *)a3;
- (id)initWithAssetReaderTrackOutput:(id)a0;
- (id)_readSampleBuffersAndReturnAVCaption;
- (id)nextCaptionGroup;
- (id)captionsNotPresentInPreviousGroupsInCaptionGroup:(id)a0;
- (void)appendOutputCaptionGroup:(id)a0;
- (id)pairedAVCaptionForFigCaption:(const struct OpaqueFigCaption { } *)a0;
- (void)setFigCaptionToAVCaptionMapping:(const struct __CFDictionary { } *)a0;

@end
