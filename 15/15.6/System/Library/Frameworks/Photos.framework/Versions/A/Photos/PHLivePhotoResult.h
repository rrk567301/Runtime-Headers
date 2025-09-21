@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    char _isDegraded;
    char _requiresImageResult;
}

- (void).cxx_destruct;
- (char)isPlaceholder;
- (id)imageData;
- (id)exifOrientation;
- (struct CGImage { } *)imageRef;
- (id)imageURL;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addVideoResult:(id)a0;
- (void)addImageResult:(id)a0;
- (id)allowedInfoKeys;
- (unsigned int)cgOrientation;
- (char)containsValidData;
- (char)isDegraded;
- (id)sanitizedInfoDictionary;
- (void)setDegraded:(char)a0;
- (void)setRequiresImageResult:(char)a0;
- (long long)uiOrientation;
- (id)videoAdjustmentData;

@end
