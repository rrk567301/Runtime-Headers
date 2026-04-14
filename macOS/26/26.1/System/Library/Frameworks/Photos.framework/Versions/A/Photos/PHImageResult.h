@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
    BOOL _isDerivedFromDeferredPreview;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void)setImageData:(id)a0;
- (id)imageData;
- (BOOL)isPlaceholder;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)setIsDerivedFromDeferredPreview:(BOOL)a0;
- (void)setImageURL:(id)a0;
- (id)allowedInfoKeys;
- (BOOL)isDegraded;
- (void)setIsPlaceholder:(BOOL)a0;
- (struct CGImage { } *)imageRef;
- (id)imageURL;
- (void)dealloc;
- (BOOL)isDerivedFromDeferredPreview;
- (id)sanitizedInfoDictionary;
- (long long)uiOrientation;
- (void).cxx_destruct;
- (void)setImageRef:(struct CGImage { } *)a0;
- (BOOL)containsValidData;
- (void)setDegraded:(BOOL)a0;

@end
