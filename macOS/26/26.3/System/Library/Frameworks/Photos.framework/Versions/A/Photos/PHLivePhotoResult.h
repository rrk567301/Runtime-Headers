@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
    BOOL _requiresImageResult;
}

- (id)uniformTypeIdentifier;
- (id)videoURL;
- (BOOL)isPlaceholder;
- (long long)uiOrientation;
- (BOOL)containsValidData;
- (struct CGImage { } *)imageRef;
- (id)imageData;
- (id)sanitizedInfoDictionary;
- (id)exifOrientation;
- (id)allowedInfoKeys;
- (void).cxx_destruct;
- (void)setDegraded:(BOOL)a0;
- (id)imageURL;
- (BOOL)isDegraded;
- (void)addImageResult:(id)a0;
- (void)addVideoResult:(id)a0;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (unsigned int)cgOrientation;
- (void)setRequiresImageResult:(BOOL)a0;
- (id)videoAdjustmentData;

@end
