@class NSData;

@interface GEOAnalyticsPipelineReportEventOperation : GEOAnalyticsPipelineReportOperation {
    unsigned long long _uploadBatchId;
    NSData *_logMsg;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 remoteProxy:(id)a2 runQueue:(id)a3 completionQueue:(id)a4 completionBlock:(id /* block */)a5;

@end
