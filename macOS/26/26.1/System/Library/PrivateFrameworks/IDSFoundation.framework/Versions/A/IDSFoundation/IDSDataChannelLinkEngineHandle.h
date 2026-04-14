@class IDSLinksQualityReportSyncTokenObject, IDSLinksQualityReportDeltaObject;

@interface IDSDataChannelLinkEngineHandle : NSObject {
    void /* unknown type, empty encoding */ linkEngine;
}

@property (nonatomic) BOOL allowOngoingTasks;

- (void).cxx_destruct;
- (id)init;
- (void)addLinkWithUniqueID:(id)a0;
- (id)initWithTimeFn:(id /* block */)a0 enableQualityMetrics:(BOOL)a1;
- (void)qualityDeltaSince:(IDSLinksQualityReportSyncTokenObject *)a0 completionHandler:(void (^)(IDSLinksQualityReportDeltaObject *))a1;
- (void)removeLinkWithUniqueID:(id)a0;
- (void)setTestableLink:(id)a0 forLinkWithUniqueID:(id)a1;

@end
