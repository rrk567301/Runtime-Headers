@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
    BOOL _requiresImageResult;
}

- (id)videoURL;
- (id)imageData;
- (id)uniformTypeIdentifier;
- (BOOL)isPlaceholder;
- (id)allowedInfoKeys;
- (BOOL)isDegraded;
- (struct CGImage { } *)imageRef;
- (id)imageURL;
- (id)sanitizedInfoDictionary;
- (long long)uiOrientation;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (id)exifOrientation;
- (void)setDegraded:(BOOL)a0;
- (void)addImageResult:(id)a0;
- (void)addVideoResult:(id)a0;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (unsigned int)cgOrientation;
- (void)setRequiresImageResult:(BOOL)a0;
- (id)videoAdjustmentData;

@end
