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
- (long long)uiOrientation;
- (void)setIsDerivedFromDeferredPreview:(BOOL)a0;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (BOOL)containsValidData;
- (BOOL)isDerivedFromDeferredPreview;
- (struct CGImage { } *)imageRef;
- (id)imageData;
- (id)sanitizedInfoDictionary;
- (void)setImageData:(id)a0;
- (void)setImageRef:(struct CGImage { } *)a0;
- (id)allowedInfoKeys;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setImageURL:(id)a0;
- (void)setDegraded:(BOOL)a0;
- (void)setIsPlaceholder:(BOOL)a0;
- (id)imageURL;
- (BOOL)isDegraded;

@end
