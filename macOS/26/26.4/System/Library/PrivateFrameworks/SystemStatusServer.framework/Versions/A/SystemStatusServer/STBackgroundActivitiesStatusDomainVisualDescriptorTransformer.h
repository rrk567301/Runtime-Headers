@class STBackgroundActivityManager;

@interface STBackgroundActivitiesStatusDomainVisualDescriptorTransformer : NSObject <STStatusDomainDataTransforming> {
    STBackgroundActivityManager *_backgroundActivityManager;
}

- (void).cxx_destruct;
- (id)transformedDataForData:(id)a0 domain:(unsigned long long)a1;
- (id)init;
- (id)initWithBackgroundActivityManager:(id)a0;

@end
