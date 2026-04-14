@class NSMutableDictionary, NSMutableArray;

@interface AVResolvedDecompressionSettings : NSObject {
    NSMutableDictionary *_decompressionAttributes;
    BOOL _useDefaultPixelBufferAttributes;
    NSMutableArray *_outputCodecTypes;
}

- (BOOL)isVideoMirrored;
- (id)description;
- (id)init;
- (id)pixelBufferAttributes;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minFrameDuration;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxFrameDuration;
- (long long)videoOrientation;
- (void)resolveDecompressionAttributes:(id)a0;
- (BOOL)allowUpscaling;
- (id)outputCodecTypes;
- (void)resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:(id)a0;
- (id)vtDecompressionProperties;

@end
