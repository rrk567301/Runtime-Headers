@class GEOLogMsgState;

@interface GEOAnalyticsPipelineUpdateSharedStateOperation : GEOAnalyticsPipelineReportOperation {
    int _stateType;
    GEOLogMsgState *_state;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithStateType:(int)a0 state:(id)a1 remoteProxy:(id)a2 runQueue:(id)a3 completionQueue:(id)a4 completionBlock:(id /* block */)a5;

@end
