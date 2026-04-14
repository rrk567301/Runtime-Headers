@class NSMutableDictionary, NSMutableArray;

@interface AVResolvedDecompressionSettings : NSObject {
    NSMutableDictionary *_decompressionAttributes;
    BOOL _useDefaultPixelBufferAttributes;
    NSMutableArray *_outputCodecTypes;
}

- (long long)videoOrientation;
- (id)pixelBufferAttributes;
- (BOOL)isVideoMirrored;
- (id)description;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minFrameDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxFrameDuration;
- (id)init;
- (void)resolveDecompressionAttributes:(id)a0;
- (BOOL)allowUpscaling;
- (id)outputCodecTypes;
- (void)resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:(id)a0;
- (id)vtDecompressionProperties;

@end
