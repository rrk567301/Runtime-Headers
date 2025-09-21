@class NSArray, NSString, NSDictionary, NSData;

@interface UVCDeviceStreamFormat : NSObject {
    NSData *_formatDescriptor;
    NSData *_frameDescriptor;
    NSData *_colorDescriptor;
    NSString *_pixelFormatName;
    unsigned long long _formatIndex;
    unsigned long long _frameIndex;
    unsigned long long _defaultFrameIndex;
    unsigned long long _frameBufferSize;
    unsigned long long _formatDescriptorSubtype;
    long long _continousFrameIntervalStep;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long preferredFrameInterval;
@property (readonly) NSArray *supportedFrameIntervals;
@property (readonly) NSString *formatGUID;
@property (readonly) char preferred;
@property (readonly) NSDictionary *attributes;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)formatIndex;
- (unsigned long long)frameIndex;
- (char)frameIntervalRangeIsDiscrete;
- (unsigned long long)tuneFrameInterval:(unsigned long long)a0;
- (id)frameDescriptor;
- (char)parseFrameBasedFormatDescriptor;
- (id)colorDescriptor;
- (unsigned long long)frameBufferSize;
- (id)formatDescriptor;
- (id)initDescriptors:(id)a0 frameDescriptor:(id)a1 colorDescriptor:(id)a2;
- (void)parseColorDescriptor;
- (char)parseFormatDescriptor;
- (char)parseFrameBasedFrameDescriptor;
- (char)parseFrameDescriptor;
- (char)parseH264FormatDescriptor;
- (char)parseH264FrameDescriptor;
- (char)parseMJPEGFormatDescriptor;
- (char)parseMJPEGFrameDescriptor;
- (char)parseUncompressedFormatDescriptor;
- (char)parseUncompressedFrameDescriptor;

@end
