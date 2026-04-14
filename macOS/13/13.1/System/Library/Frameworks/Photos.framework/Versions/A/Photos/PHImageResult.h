@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isPlaceholder;
- (id)imageData;
- (struct CGImage { } *)imageRef;
- (void)setImageRef:(struct CGImage { } *)a0;
- (id)imageURL;
- (void)setIsPlaceholder:(BOOL)a0;
- (void)setImageData:(id)a0;
- (void)setImageURL:(id)a0;
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;
- (long long)uiOrientation;
- (BOOL)isDegraded;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)setDegraded:(BOOL)a0;

@end
