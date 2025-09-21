@class NSDictionary, BWVideoFormat;
@protocol BWInferenceCropDescriptor;

@interface BWInferenceVideoFormat : NSObject <NSCopying> {
    BWVideoFormat *_underlyingVideoFormat;
    char _deviceOriented;
    long long _videoContentMode;
    char _includesInvalidContent;
    id<BWInferenceCropDescriptor> _cropDescriptor;
    int _rotationDegrees;
}

@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) unsigned long long extendedWidth;
@property (readonly, nonatomic) unsigned long long extendedHeight;
@property (readonly, nonatomic) int colorSpaceProperties;
@property (readonly, nonatomic) char deviceOriented;
@property (readonly, nonatomic) int rotationDegrees;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly, nonatomic) BWVideoFormat *underlyingVideoFormat;
@property (readonly, nonatomic) long long videoContentMode;
@property (readonly, nonatomic) char includesInvalidContent;
@property (readonly, nonatomic) id<BWInferenceCropDescriptor> cropDescriptor;
@property (readonly, copy, nonatomic) id /* block */ histogramRequest;

+ (id)formatByResolvingRequirements:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithUnderlyingFormat:(id)a0 isDeviceOriented:(char)a1 videoContentMode:(long long)a2 includesInvalidContent:(char)a3 cropDescriptor:(id)a4 histogramRequest:(id /* block */)a5 rotationDegrees:(int)a6;

@end
