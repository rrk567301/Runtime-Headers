@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
    BOOL _isDerivedFromDeferredPreview;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (BOOL)isPlaceholder;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)dealloc;
- (void)setIsDerivedFromDeferredPreview:(BOOL)a0;
- (void)setImageURL:(id)a0;
- (BOOL)containsValidData;
- (void)setImageRef:(struct CGImage { } *)a0;
- (struct CGImage { } *)imageRef;
- (id)imageURL;
- (id)imageData;
- (id)allowedInfoKeys;
- (void)setDegraded:(BOOL)a0;
- (void)setImageData:(id)a0;
- (BOOL)isDegraded;
- (BOOL)isDerivedFromDeferredPreview;
- (long long)uiOrientation;
- (id)sanitizedInfoDictionary;
- (void)setIsPlaceholder:(BOOL)a0;
- (void).cxx_destruct;

@end
