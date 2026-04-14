@class NSString;

@interface AVCaptureSmartFraming : NSObject {
    NSString *_aspectRatio;
    float _zoomFactor;
}

@property (readonly) NSString *aspectRatio;
@property (readonly) float zoomFactor;

+ (void)initialize;
+ (id)smartFramingWithAspectRatio:(id)a0 zoomFactor:(float)a1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)_initWithAspectRatio:(id)a0 zoomFactor:(float)a1;

@end
