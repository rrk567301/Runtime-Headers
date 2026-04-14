@class STBackgroundActivityManager;

@interface STBackgroundActivitiesStatusDomainVisualDescriptorTransformer : NSObject <STStatusDomainDataTransforming> {
    STBackgroundActivityManager *_backgroundActivityManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)transformedDataForData:(id)a0 domain:(unsigned long long)a1;
- (id)initWithBackgroundActivityManager:(id)a0;

@end
