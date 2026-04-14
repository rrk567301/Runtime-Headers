@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
    BOOL _isDerivedFromDeferredPreview;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (struct CGImage { } *)imageRef;
- (void)setImageData:(id)a0;
- (id)imageData;
- (id)sanitizedInfoDictionary;
- (void)setDegraded:(BOOL)a0;
- (id)imageURL;
- (long long)uiOrientation;
- (void)setImageURL:(id)a0;
- (void).cxx_destruct;
- (void)setImageRef:(struct CGImage { } *)a0;
- (void)setIsDerivedFromDeferredPreview:(BOOL)a0;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (id)allowedInfoKeys;
- (void)setIsPlaceholder:(BOOL)a0;
- (BOOL)containsValidData;
- (BOOL)isDerivedFromDeferredPreview;
- (BOOL)isPlaceholder;
- (BOOL)isDegraded;
- (void)dealloc;

@end
