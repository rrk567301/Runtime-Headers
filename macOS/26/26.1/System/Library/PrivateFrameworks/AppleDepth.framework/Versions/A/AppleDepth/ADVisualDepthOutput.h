@class ADCameraCalibration;

@interface ADVisualDepthOutput : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *depthForPrimaryPoV;
@property (readonly, nonatomic) struct __CVBuffer { } *depthForSecondaryPoV;
@property (readonly, nonatomic) struct __CVBuffer { } *confidenceForPrimaryPoV;
@property (readonly, nonatomic) struct __CVBuffer { } *confidenceForSecondaryPoV;
@property (readonly, nonatomic) struct __CVBuffer { } *occlusionForPrimaryPoV;
@property (readonly, nonatomic) struct __CVBuffer { } *occlusionForSecondaryPoV;
@property (readonly, nonatomic) ADCameraCalibration *primaryPoVCameraCalibration;
@property (readonly, nonatomic) ADCameraCalibration *secondaryPoVCameraCalibration;
@property (readonly, nonatomic) double timestamp;

+ (id)outputWithDepthForPrimaryPoV:(struct __CVBuffer { } *)a0 depthForSecondaryPoV:(struct __CVBuffer { } *)a1;
+ (id)outputWithDepthForPrimaryPoV:(struct __CVBuffer { } *)a0 depthForSecondaryPoV:(struct __CVBuffer { } *)a1 confidenceForPrimaryPoV:(struct __CVBuffer { } *)a2 confidenceForSecondaryPoV:(struct __CVBuffer { } *)a3 occlusionForPrimaryPoV:(struct __CVBuffer { } *)a4 occlusionForSecondaryPoV:(struct __CVBuffer { } *)a5;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addPrimaryCalibration:(id)a0 secondaryCalibration:(id)a1 timestamp:(double)a2;
- (id)initWithDepthForPrimaryPoV:(struct __CVBuffer { } *)a0 depthForSecondaryPoV:(struct __CVBuffer { } *)a1 confidenceForPrimaryPoV:(struct __CVBuffer { } *)a2 confidenceForSecondaryPoV:(struct __CVBuffer { } *)a3 occlusionForPrimaryPoV:(struct __CVBuffer { } *)a4 occlusionForSecondaryPoV:(struct __CVBuffer { } *)a5;

@end
