@class GEOLogMsgState;

@interface GEOAnalyticsPipelineUpdateSharedStateOperation : GEOAnalyticsPipelineReportOperation {
    int _stateType;
    GEOLogMsgState *_state;
}

- (void).cxx_destruct;
- (void)main;

@end
