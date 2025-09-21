@interface ADJasperPearlInFieldCalibrationPearlInput : NSObject

@property (nonatomic) struct __CVBuffer { } *depth;
@property (nonatomic) struct __CVBuffer { } *dx;
@property (nonatomic) struct __CVBuffer { } *dy;
@property (nonatomic) struct __CVBuffer { } *score;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } prevPose;
@property (nonatomic) double timestamp;
@property (nonatomic) float temperature;

- (id)getPearlDepthAttachments;

@end
