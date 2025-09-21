@class NSString, ADDensifiedLiDARFocusAssistExecutor, ADStreamSync;
@protocol ADFlowDelegate;

@interface ADDensifiedLiDARFocusAssistFlow : ADFlow <ADFlowColorConsumer, ADFlowPointCloudConsumer> {
    ADStreamSync *_streamSync;
    NSString *_transformKey;
    BOOL _canDelegateProcess;
    BOOL _canDelegateFailure;
    id<ADFlowDelegate> _delegate;
}

@property (readonly, retain, nonatomic) ADDensifiedLiDARFocusAssistExecutor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (id)delegate;
- (void).cxx_destruct;
- (void)handleMatch:(id)a0;
- (id)initWithExecutor:(id)a0;
- (void)pushColor:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 metadata:(id)a3 timestamp:(double)a4;
- (void)pushPointCloud:(id)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 timestamp:(double)a3;

@end
