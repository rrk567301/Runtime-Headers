@class NSString, ADStreamSync, ADPCEDisparityColorExecutor;
@protocol ADFlowDelegate;

@interface ADPCEDisparityColorFlow : ADFlow <ADFlowColorConsumer, ADFlowDepthConsumer> {
    ADStreamSync *_streamSync;
    BOOL _canDelegateFailure;
    BOOL _canDelegateProcess;
    id<ADFlowDelegate> _delegate;
}

@property (readonly, retain, nonatomic) ADPCEDisparityColorExecutor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)handleMatch:(id)a0;
- (id)initWithExecutor:(id)a0;
- (void)pushColor:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 metadata:(id)a3 timestamp:(double)a4;
- (void)pushDepth:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 metadata:(id)a2 timestamp:(double)a3;

@end
