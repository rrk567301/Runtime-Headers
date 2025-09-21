@class NSMutableDictionary, NSMutableArray;

@interface AVResolvedDecompressionSettings : NSObject {
    NSMutableDictionary *_decompressionAttributes;
    BOOL _useDefaultPixelBufferAttributes;
    NSMutableArray *_outputCodecTypes;
}

- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxFrameDuration;
- (BOOL)isVideoMirrored;
- (long long)videoOrientation;
- (void)dealloc;
- (id)pixelBufferAttributes;
- (id)init;
- (id)description;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minFrameDuration;
- (void)resolveDecompressionAttributes:(id)a0;
- (BOOL)allowUpscaling;
- (id)outputCodecTypes;
- (void)resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:(id)a0;
- (id)vtDecompressionProperties;

@end
