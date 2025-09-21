@class NSDictionary, NSString;

@interface QTVideoCompressionOptions : QTCompressionOptions {
    unsigned int _codecType;
    NSDictionary *_vtCompressionProperties;
    long long _sizeMode;
    long long _width;
    long long _height;
    NSString *_localizedCompressionOptionsSummary;
    NSDictionary *_preferredInputPixelBufferAttributes;
}

+ (id)compressionOptionsWithDescription:(id)a0;

- (long long)height;
- (long long)width;
- (long long)sizeMode;
- (unsigned int)codecType;
- (id)_preferredInputPixelBufferAttributes;
- (struct CGSize { double x0; double x1; })compressedSizeForOriginalSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCodecType:(unsigned int)a0 sizeMode:(long long)a1 width:(long long)a2 height:(long long)a3 vtCompressionProperties:(id)a4;
- (id)localizedCompressionOptionsSummary;
- (id)vtCompressionProperties;

@end
