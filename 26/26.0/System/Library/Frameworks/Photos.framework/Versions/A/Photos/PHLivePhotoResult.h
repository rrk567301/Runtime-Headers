@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
    BOOL _requiresImageResult;
}

- (BOOL)isPlaceholder;
- (id)uniformTypeIdentifier;
- (id)videoURL;
- (BOOL)containsValidData;
- (struct CGImage { } *)imageRef;
- (id)exifOrientation;
- (id)imageURL;
- (id)imageData;
- (id)allowedInfoKeys;
- (void)setDegraded:(BOOL)a0;
- (BOOL)isDegraded;
- (long long)uiOrientation;
- (id)sanitizedInfoDictionary;
- (void).cxx_destruct;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addImageResult:(id)a0;
- (void)addVideoResult:(id)a0;
- (unsigned int)cgOrientation;
- (void)setRequiresImageResult:(BOOL)a0;
- (id)videoAdjustmentData;

@end
