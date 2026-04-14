@class FRCImageProcessor, OpticalFlow;

@interface FRCOpticalFlowEstimator : NSObject {
    OpticalFlow *_opticalFlow;
    FRCImageProcessor *_processor;
    BOOL _resourcePreAllocated;
    long long _usage;
    unsigned long long _width;
    unsigned long long _height;
    long long _inputRotation;
}

@property (readonly, nonatomic) unsigned long long flowWidth;
@property (readonly, nonatomic) unsigned long long flowHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (void)allocateResources;
- (void)releaseResources;
- (id)initWithUsage:(long long)a0;
- (long long)opticalFlowFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2;
- (long long)opticalFlowsFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3;
- (struct __CVBuffer { } *)opticalFlowFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;
- (id)opticalFlowsFrom:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;

@end
