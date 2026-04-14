@class NSUUID, ADCameraCalibration;

@interface ADVisualDepthBuffer : NSObject

@property (nonatomic) struct __CVBuffer { } *image;
@property (nonatomic) struct __CVBuffer { } *confidence;
@property (nonatomic) struct __CVBuffer { } *labels;
@property (nonatomic) struct __CVBuffer { } *normals;
@property (retain, nonatomic) ADCameraCalibration *calibration;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;
@property (nonatomic) double timestamp;

+ (id)inputWithImage:(struct __CVBuffer { } *)a0 confidence:(struct __CVBuffer { } *)a1 calibration:(id)a2;
+ (id)inputWithImage:(struct __CVBuffer { } *)a0 confidence:(struct __CVBuffer { } *)a1 calibration:(id)a2 uuid:(id)a3;
+ (id)inputWithImage:(struct __CVBuffer { } *)a0 confidence:(struct __CVBuffer { } *)a1 labels:(struct __CVBuffer { } *)a2 normals:(struct __CVBuffer { } *)a3 calibration:(id)a4 uuid:(id)a5 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 timestamp:(double)a7;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImage:(struct __CVBuffer { } *)a0 confidence:(struct __CVBuffer { } *)a1 labels:(struct __CVBuffer { } *)a2 normals:(struct __CVBuffer { } *)a3 calibration:(id)a4 uuid:(id)a5 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 timestamp:(double)a7;

@end
