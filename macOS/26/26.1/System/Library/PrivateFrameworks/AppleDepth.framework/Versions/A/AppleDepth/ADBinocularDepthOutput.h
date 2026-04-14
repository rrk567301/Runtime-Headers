@class ADCameraCalibration;

@interface ADBinocularDepthOutput : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *auxDepth;
@property (readonly, nonatomic) struct __CVBuffer { } *auxConfidence;
@property (readonly, nonatomic) struct __CVBuffer { } *auxSegmentation;
@property (readonly, nonatomic) ADCameraCalibration *auxOutputCalibration;

+ (id)outputWithAuxDepth:(struct __CVBuffer { } *)a0 auxConfidence:(struct __CVBuffer { } *)a1 auxSegmentation:(struct __CVBuffer { } *)a2 auxOutputCalibration:(id)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAuxDepth:(struct __CVBuffer { } *)a0 auxConfidence:(struct __CVBuffer { } *)a1 auxSegmentation:(struct __CVBuffer { } *)a2 auxOutputCalibration:(id)a3;

@end
