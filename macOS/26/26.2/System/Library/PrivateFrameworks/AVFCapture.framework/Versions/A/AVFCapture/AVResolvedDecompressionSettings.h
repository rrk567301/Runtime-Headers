@class NSMutableDictionary, NSMutableArray;

@interface AVResolvedDecompressionSettings : NSObject {
    NSMutableDictionary *_decompressionAttributes;
    BOOL _useDefaultPixelBufferAttributes;
    NSMutableArray *_outputCodecTypes;
}

- (struct { long long x0; int x1; unsigned int x2; long long x3; })minFrameDuration;
- (id)pixelBufferAttributes;
- (long long)videoOrientation;
- (BOOL)isVideoMirrored;
- (id)description;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxFrameDuration;
- (id)init;
- (void)dealloc;
- (void)resolveDecompressionAttributes:(id)a0;
- (BOOL)allowUpscaling;
- (id)outputCodecTypes;
- (void)resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:(id)a0;
- (id)vtDecompressionProperties;

@end
