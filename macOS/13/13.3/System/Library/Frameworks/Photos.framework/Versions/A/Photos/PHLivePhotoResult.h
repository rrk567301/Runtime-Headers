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
- (void)addVideoResult:(id)a0;
- (id)allowedInfoKeys;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addImageResult:(id)a0;
- (unsigned int)cgOrientation;
- (BOOL)containsValidData;
- (BOOL)isDegraded;
- (id)sanitizedInfoDictionary;
- (void)setDegraded:(BOOL)a0;
- (long long)uiOrientation;
- (id)videoAdjustmentData;
- (id)videoURL;

@end
