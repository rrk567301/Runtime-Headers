@class NSMutableDictionary, NSMutableArray;

@interface AVResolvedDecompressionSettings : NSObject {
    NSMutableDictionary *_decompressionAttributes;
    BOOL _useDefaultPixelBufferAttributes;
    NSMutableArray *_outputCodecTypes;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minFrameDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxFrameDuration;
- (id)pixelBufferAttributes;
- (long long)videoOrientation;
- (BOOL)isVideoMirrored;
- (void)resolveDecompressionAttributes:(id)a0;
- (void)resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:(id)a0;
- (id)vtDecompressionProperties;
- (BOOL)allowUpscaling;
- (id)outputCodecTypes;

@end
