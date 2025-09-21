@class OpticalFlowProcessor, DVPOpticalFlowConfiguration, GGMController, DVPOpticalFlowParameters, DVPFrameOpticalFlow;

@interface VDGProcessor : BaseProcessor {
    OpticalFlowProcessor *_opticalFlowProcessor;
    DVPOpticalFlowConfiguration *_opticalFlowConfig;
    DVPOpticalFlowParameters *_opticalFlowParams;
    DVPFrameOpticalFlow *_opticalFlowBuffers;
    GGMController *_ggmController;
    long long _frameWidth;
    long long _frameHeight;
    BOOL _usePrecomputedFlow;
    long long _flowBufferWidth;
    long long _flowBufferHeight;
    struct __CVBuffer { } *_forwardFlow;
    struct __CVBuffer { } *_backwardFlow;
    BOOL _acceptsOpticalFlow;
}

- (BOOL)finishProcessing;
- (void).cxx_destruct;
- (id)initWithFrameWidth:(long long)a0 FrameHeight:(long long)a1 usePrecomputedFlow:(BOOL)a2 revision:(long long)a3;
- (BOOL)processWithDeghostingParams:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithDeghostingConfig:(id)a0 error:(id *)a1;

@end
