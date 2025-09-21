@class NSString;

@interface AVCaptureFraming : NSObject {
    NSString *_aspectRatio;
    float _zoomFactor;
}

@property (readonly) NSString *aspectRatio;
@property (readonly) float zoomFactor;

+ (void)initialize;
+ (id)framingWithAspectRatio:(id)a0 zoomFactor:(float)a1;

- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithAspectRatio:(id)a0 zoomFactor:(float)a1;

@end
