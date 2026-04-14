@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
    BOOL _requiresImageResult;
}

- (struct CGImage { } *)imageRef;
- (id)imageData;
- (id)uniformTypeIdentifier;
- (id)sanitizedInfoDictionary;
- (void)setDegraded:(BOOL)a0;
- (id)imageURL;
- (id)videoURL;
- (long long)uiOrientation;
- (void).cxx_destruct;
- (id)exifOrientation;
- (id)allowedInfoKeys;
- (BOOL)containsValidData;
- (BOOL)isPlaceholder;
- (BOOL)isDegraded;
- (void)addImageResult:(id)a0;
- (void)addVideoResult:(id)a0;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (unsigned int)cgOrientation;
- (void)setRequiresImageResult:(BOOL)a0;
- (id)videoAdjustmentData;

@end
