@class STBackgroundActivityManager;

@interface STBackgroundActivitiesStatusDomainVisualDescriptorTransformer : NSObject <STStatusDomainDataTransforming> {
    STBackgroundActivityManager *_backgroundActivityManager;
}

- (id)transformedDataForData:(id)a0 domain:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBackgroundActivityManager:(id)a0;

@end
