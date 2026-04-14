@class NSUUID, NSError, SiriAnalyticsLargeMessageUploadProcessingResult, DUSchemaDUEvent;

@interface SiriAnalyticsLargeMessageUploadProcessor : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ metastore;
}

- (id)init;
- (id)initWithQueue:(id)a0 metastore:(id)a1;
- (void)processWithUploadEvent:(DUSchemaDUEvent *)a0 requestIdentifier:(NSUUID *)a1 completionHandler:(void (^)(SiriAnalyticsLargeMessageUploadProcessingResult *, NSError *))a2;

@end
