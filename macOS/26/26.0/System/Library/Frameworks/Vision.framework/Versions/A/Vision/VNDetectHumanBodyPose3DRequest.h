@class NSArray, VNABPKPipelineWrapper;

@interface VNDetectHumanBodyPose3DRequest : VNStatefulRequest {
    VNABPKPipelineWrapper *_bodyPosePipelineWrapper;
}

@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;
+ (Class)configurationClass;
+ (id)_supportedJointNamesRevision1;
+ (id)_supportedJointsGroupsNamesRevision1;

- (id)init;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)_initializeStateForRevision:(unsigned long long)a0;
- (id)initWithFrameAnalysisSpacing:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (id)supportedJointNamesAndReturnError:(id *)a0;
- (id)supportedJointsGroupNamesAndReturnError:(id *)a0;

@end
