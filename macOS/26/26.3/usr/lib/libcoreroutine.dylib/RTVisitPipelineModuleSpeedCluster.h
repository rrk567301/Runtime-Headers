@class NSString, RTLocation, RTVisitHyperParameter, RTVisit;

@interface RTVisitPipelineModuleSpeedCluster : NSObject <RTVisitPipelineModule> {
    RTVisit *_workingVisit;
    RTLocation *_lastPoint;
    RTVisitHyperParameter *_hyperParameter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearAndAddForcedExitSignalToClusters:(id)a0;
- (id)init;
- (id)initWithHyperParameter:(id)a0;
- (void).cxx_destruct;
- (void)clearWorkingVisit;
- (id)process:(id)a0;

@end
