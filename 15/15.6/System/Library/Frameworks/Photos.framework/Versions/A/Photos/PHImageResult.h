@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    char _isPlaceholder;
    char _degraded;
    char _isDerivedFromDeferredPreview;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isPlaceholder;
- (id)imageData;
- (struct CGImage { } *)imageRef;
- (void)setImageRef:(struct CGImage { } *)a0;
- (id)imageURL;
- (void)setImageData:(id)a0;
- (void)setImageURL:(id)a0;
- (void)setIsPlaceholder:(char)a0;
- (id)allowedInfoKeys;
- (char)containsValidData;
- (char)isDegraded;
- (char)isDerivedFromDeferredPreview;
- (id)sanitizedInfoDictionary;
- (void)setDegraded:(char)a0;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)setIsDerivedFromDeferredPreview:(char)a0;
- (long long)uiOrientation;

@end
