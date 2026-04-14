@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
}

- (void).cxx_destruct;
- (BOOL)isPlaceholder;
- (id)imageData;
- (id)exifOrientation;
- (struct CGImage { } *)imageRef;
- (id)imageURL;
- (id)uniformTypeIdentifier;
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;
- (long long)uiOrientation;
- (unsigned int)cgOrientation;
- (id)videoURL;
- (id)videoAdjustmentData;
- (BOOL)isDegraded;
- (void)setDegraded:(BOOL)a0;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addImageResult:(id)a0;
- (void)addVideoResult:(id)a0;

@end
