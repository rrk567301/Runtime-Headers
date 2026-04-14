@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
    BOOL _isDerivedFromDeferredPreview;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (long long)uiOrientation;
- (id)imageURL;
- (void)setIsPlaceholder:(BOOL)a0;
- (struct CGImage { } *)imageRef;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)setDegraded:(BOOL)a0;
- (BOOL)isDerivedFromDeferredPreview;
- (id)sanitizedInfoDictionary;
- (void)setImageData:(id)a0;
- (BOOL)isPlaceholder;
- (void).cxx_destruct;
- (void)setImageURL:(id)a0;
- (void)setImageRef:(struct CGImage { } *)a0;
- (BOOL)containsValidData;
- (BOOL)isDegraded;
- (id)imageData;
- (id)allowedInfoKeys;
- (void)dealloc;
- (void)setIsDerivedFromDeferredPreview:(BOOL)a0;

@end
