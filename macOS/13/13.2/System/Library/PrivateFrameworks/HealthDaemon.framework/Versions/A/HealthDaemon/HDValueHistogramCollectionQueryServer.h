@class HKValueHistogramCollectionQueryServerConfiguration;

@interface HDValueHistogramCollectionQueryServer : HDQueryServer {
    HKValueHistogramCollectionQueryServerConfiguration *_valueHistogramCollectionQueryServerConfiguration;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;

@end
