@interface CCSimplePass : CCPass {
    id /* block */ executionHandler;
    id /* block */ lateUpdateExecutionHandler;
    id /* block */ hybridWarpLateUpdateExecutionHandler;
    id /* block */ finalizeCPUWorkloadForFrameExecutionHandler;
}

@property (copy, nonatomic) id /* block */ validationHandler;

- (BOOL)executable;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)executeWithAccelerateDeviceGroup:(id)a0;
- (BOOL)hybridWarpLateUpdate;
- (id)initWithExecutionHandler:(id /* block */)a0;
- (BOOL)lateUpdate;
- (BOOL)validateWithAccelerateDeviceGroup:(id)a0 error:(id *)a1;

@end
