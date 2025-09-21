@class NSDictionary;

@interface VideosUI.MetricsRecorderObjC : NSObject <VUIMetricsRecorderProtocolObjC> {
    void /* unknown type, empty encoding */ viewMetricsRecorder;
    void /* function */ pageData;
}

@property (nonatomic, copy) NSDictionary *pageData;

- (id)init;
- (void).cxx_destruct;
- (void)addItemToImpressionsTracker:(id)a0 index:(unsigned long long)a1;
- (void)recordClick:(id)a0 locationData:(id)a1;
- (void)recordClick:(id)a0 locationIndex:(unsigned long long)a1;
- (void)recordImpressions;
- (void)recordPage:(id)a0;
- (void)removeItemFromImpressionsTracker:(id)a0 index:(unsigned long long)a1;

@end
