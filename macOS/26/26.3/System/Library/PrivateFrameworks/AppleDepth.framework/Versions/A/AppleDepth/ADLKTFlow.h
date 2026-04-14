@class ADLKTExecutor, NSString, ADStreamSync;
@protocol ADFlowDelegate;

@interface ADLKTFlow : ADFlow <ADFlowColorConsumer, ADFlowSecondaryColorConsumer> {
    ADStreamSync *_streamSync;
    BOOL _isTemporal;
    BOOL _canDelegateProcess;
    BOOL _canDelegateFailure;
    id<ADFlowDelegate> _delegate;
}

@property (readonly, retain, nonatomic) ADLKTExecutor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithExecutor:(id)a0 forTemporalOpticalFlow:(BOOL)a1;
- (void)processMatch:(id)a0;
- (void)pushColor:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 metadata:(id)a3 timestamp:(double)a4;
- (void)pushSecondaryColor:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 timestamp:(double)a3;

@end
