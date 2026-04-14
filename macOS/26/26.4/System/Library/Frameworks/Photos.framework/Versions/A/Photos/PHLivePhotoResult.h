@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
    BOOL _requiresImageResult;
}

- (long long)uiOrientation;
- (id)imageURL;
- (struct CGImage { } *)imageRef;
- (id)videoURL;
- (void)setDegraded:(BOOL)a0;
- (id)uniformTypeIdentifier;
- (id)sanitizedInfoDictionary;
- (id)exifOrientation;
- (BOOL)isPlaceholder;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (BOOL)isDegraded;
- (id)imageData;
- (id)allowedInfoKeys;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addImageResult:(id)a0;
- (void)addVideoResult:(id)a0;
- (unsigned int)cgOrientation;
- (void)setRequiresImageResult:(BOOL)a0;
- (id)videoAdjustmentData;

@end
