@class _PASXPCClientHelper;
@protocol TRIPaths;

@interface TRIActiveEnvVarFactorsWriter : NSObject {
    id<TRIPaths> _paths;
    _PASXPCClientHelper *_internalHelper;
}

- (id)initWithPaths:(id)a0;
- (void).cxx_destruct;
- (id)_constructPlistForExperiments:(id)a0;
- (BOOL)_remoteWriteExperimentData:(id)a0 error:(id *)a1;
- (void)writeExperiments:(id)a0;

@end
