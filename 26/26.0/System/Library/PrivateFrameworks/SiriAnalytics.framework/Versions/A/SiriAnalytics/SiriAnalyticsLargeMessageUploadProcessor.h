@class NSUUID, SiriAnalyticsLargeMessageUploadProcessingResult, DUSchemaDUEvent;

@interface SiriAnalyticsLargeMessageUploadProcessor : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ metastore;
    void /* unknown type, empty encoding */ logicalClocks;
}

- (id)init;
- (id)initWithQueue:(id)a0 metastore:(id)a1 logicalClocks:(id)a2;
- (void)processWithUploadEvent:(DUSchemaDUEvent *)a0 requestIdentifier:(NSUUID *)a1 completionHandler:(void (^)(SiriAnalyticsLargeMessageUploadProcessingResult *))a2;

@end
