@class NSString, NSArray, NSDictionary;

@interface FigCaptureSourceFormat : NSObject {
    NSDictionary *_formatDictionary;
    NSString *_uniqueID;
    unsigned int _pixelFormatOverride;
}

@property (readonly) unsigned int mediaType;
@property (readonly) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly) NSString *uniqueID;
@property (readonly) unsigned int format;
@property (readonly) struct { int x0; int x1; } dimensions;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) int maxPoints;
@property (readonly, getter=isDefaultActiveFormat) char defaultActiveFormat;
@property (readonly, getter=isExperimental) char experimental;
@property (readonly) NSArray *highResStillImageDimensions;
@property (readonly) struct { int x0; int x1; } soleHighResStillImageDimensions;
@property (readonly) struct { int x0; int x1; } defaultHighResStillImageDimensions;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (id)formatDictionary;
- (id)initWithFigCaptureStreamFormatDictionary:(id)a0;
- (id)initWithFigCaptureStreamFormatDictionary:(id)a0 pixelFormatOverride:(unsigned int)a1;

@end
