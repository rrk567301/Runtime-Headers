@class IDSLinksQualityMeasurerDelta, NSUUID, NSString, NSArray, IDSTestableLinkWithScheduler, IDSLinksQualityMeasurerSyncToken;

@interface IDSLinksQualityMeasurer : NSObject {
    void /* unknown type, empty encoding */ measurer;
}

- (id)init;
- (void)stopWithCompletionHandler:(void (^)(void))a0;
- (void).cxx_destruct;
- (id)initWithTimeFn:(id /* block */)a0;
- (void)addLink:(IDSTestableLinkWithScheduler *)a0 uniqueID:(NSUUID *)a1 completionHandler:(void (^)(void))a2;
- (void)deltaSince:(IDSLinksQualityMeasurerSyncToken *)a0 completionHandler:(void (^)(IDSLinksQualityMeasurerDelta *))a1;
- (void)importDelta:(IDSLinksQualityMeasurerDelta *)a0 sourceName:(NSString *)a1 completionHandler:(void (^)(void))a2;
- (void)removeLink:(IDSTestableLinkWithScheduler *)a0 completionHandler:(void (^)(void))a1;
- (void)startCapturingBasicStats:(BOOL)a0 sendBursts:(BOOL)a1 completionHandler:(void (^)(void))a2;
- (void)generateReportWithCompletionHandler:(void (^)(NSArray *))a0;
- (void)removeAllLinksWithCompletionHandler:(void (^)(void))a0;

@end
